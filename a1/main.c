#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kyazdani");
MODULE_DESCRIPTION("My First Linux Module");
MODULE_VERSION("0.1");

static int __init hello_init(void) {
	printk(KERN_INFO "Hello world !\n");
	return 0;
}

static void __exit hello_exit(void) {
	printk(KERN_INFO "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_exit);
