#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(custom_syscall)
{
    printk(KERN_INFO "Greetings from kernel and team no 20.\n");
    return 0;
}
