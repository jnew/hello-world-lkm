/* This is a simple Hello World LKM
 * It will print messages on init/exit via printk
 */
#include <linux/module.h> //for init and exit macros

static int init_hello(void) {
	printk("Hello world!\n");
	return 0;
}

static void exit_goodbye(void) {
	printk("Goodbye world!\n");
}

module_init(init_hello);
module_exit(exit_goodbye);
