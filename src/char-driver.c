#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

static int __init my_char_init(void){
    printk(KERN_INFO"Char driver loaded\n");
    return 0;
}

static void  __exit my_char_exit(void){
    printk(KERN_INFO"Char driver unloaded\n");
}

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A char driver");
MODULE_AUTHOR("Saran Sivakumar");

module_init(my_char_init);
module_exit(my_char_exit);
