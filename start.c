/*
* start.c − Illustration of multi filed modules
*/
#include <linux/kernel.h>
#include <linux/module.h>

/*test*/

/* We're doing kernel work */
/* Specifically, a module */
int init_module(void)
{
	printk(KERN_INFO "Hello, world − this is the kernel speaking\n");
	return 0;
}

void cleanup_module()
{
	printk(KERN_INFO "Short is the life of a kernel module\n");
}
