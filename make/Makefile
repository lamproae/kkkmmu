.EXPORT_ALL_VARIABLES:

include $(MAKE_DIR)/.rule
include $(SCRIPT_DIR)/function.mk

INSTALL		= sudo  install --owner=root --group=root -D --verbose

CP		= sudo cp
CHOWN		= sudo chown
CHGRP		= sudo chgrp
CHMOD		= sudo chmod

DEPMOD		= /sbin/depmod
KALLSYMS	= scripts/kallsyms
PERL		= perl
CHECK		= sparse
MAKE		= make
MKDIR		= mkdir
AWK		= awk
SED		= sed

AR		=$(CROSS_COMPILE)ar
LD		=$(CROSS_COMPILE)ld
CC		=$(CROSS_COMPILE)gcc
CXX		=$(CROSS_COMPILE)g++
AS		=$(CROSS_COMPILE)as
nm		=$(CROSS_COMPILE)nm
STRIP		=$(CROSS_COMPILE)strip
RANLIB		=$(CROSS_COMPILE)ranlib
OBJCOPY		=$(CROSS_COMPILE)objcopy
OBJDUMP		=$(CROSS_COMPILE)objdump

all: prepare build

prepare:
	$(call print_build, $@)
	$(MAKE) -f $@.mk

build: config apps rootfs kernel modules

apps: lib
	$(MAKE) -f $@.mk

rootfs:
	$(MAKE) -f $@.mk

modules:
	$(MAKE) -f $@.mk

kernel: 
	$(MAKE) -f $@.mk

config:
	$(MAKE) -f lib.mk $@
	$(MAKE) -f apps.mk $@
	$(MAKE) -f kernel.mk $@

lib:
	$(MAKE) -f $@.mk 

clean:
	$(MAKE) -f lib.mk $@
	$(MAKE) -f apps.mk $@
	$(MAKE) -f kernel.mk $@ 
	$(MAKE) -f modules.mk $@ 

distclean:
	$(MAKE) -f lib.mk $@
	$(MAKE) -f apps.mk $@
	
.PHONY: rootfs all apps modules kernel prepare config
