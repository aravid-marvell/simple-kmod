/*  
 *  simple-kmod.c - The simplest kernel module.
 */
#include <linux/module.h>   /* Needed by all modules */
#include <linux/kernel.h>   /* Needed for KERN_INFO */

MODULE_LICENSE("MIT");
MODULE_VERSION(KMODVER);

int init_module(void)
{
    printk(KERN_INFO "Hello world from Marvell simple_kmod.\n");

    /* 
     * A non 0 return means init_module failed; module can't be loaded. 
     */
    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Goodbye world from Marvell simple_kmod.\n");
}
