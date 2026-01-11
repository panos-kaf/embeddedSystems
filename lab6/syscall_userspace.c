#include <sys/syscall.h>
#include <stdio.h>

#define __NR_mysyscall 386

int main() {
    long res = syscall(__NR_mysyscall);

    if (res == 0) {
        printf("Syscall executed successfully!\n");
    } else {
        perror("Syscall failed");
    }
    
    fork();

    return 0;
}
