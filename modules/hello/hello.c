#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
	printk(KERN_EMERG "Hello world\n");
	return 0;
}

static int __exit hello_exit(void)
{
	printk(KERN_EMERG "Goodby world\n");
	return 0;
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
