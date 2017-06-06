#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
 
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("Mikkel and Thomas");
MODULE_DESCRIPTION("A very simple Linux device driver.");
MODULE_VERSION("0.1");
 
static int __init hello_init(void){
   printk(KERN_INFO "Hello World!, from your device.\n");
   return 0;
}

static void __exit hello_exit(void){
   printk(KERN_INFO "Goodbye World!, from your device.\n");
}

module_init(hello_init);
module_exit(hello_exit);