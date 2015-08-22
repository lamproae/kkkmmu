#mithrandir

This is a personal linux study project.

To use this project the follow package is necessary:
	1. bridge-utils
	2. qemu

1. Currently we only support for x86_64 and arm.

2. You may need to enable DEVFS in linux kernel for mdev can successfully create the device node.

3. For telnet/sshd you need to enable devpts in the kernel configuration.

4. You need to build you toolchain with crosstool-ng in tools directory, and then copy the toolchains to tool/toolchain directory.

5. Enable framebuffer device in kernel configuration, you can do a lot of interesting things.

