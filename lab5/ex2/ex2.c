#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

void dump_termios(const struct termios *t)
{
    printf("c_iflag: 0x%08lx\n", (unsigned long)t->c_iflag);
    printf("c_oflag: 0x%08lx\n", (unsigned long)t->c_oflag);
    printf("c_cflag: 0x%08lx\n", (unsigned long)t->c_cflag);
    printf("c_lflag: 0x%08lx\n", (unsigned long)t->c_lflag);

    printf("c_ispeed: 0x%lX\n", (unsigned long)cfgetispeed(t));
    printf("c_ospeed: 0x%lX\n", (unsigned long)cfgetospeed(t));

    printf("Control chars:\n");
    printf("  VINTR  : 0x%X\n", t->c_cc[VINTR]);
    printf("  VQUIT  : 0x%X\n", t->c_cc[VQUIT]);
    printf("  VERASE : 0x%X\n", t->c_cc[VERASE]);
    printf("  VKILL  : 0x%X\n", t->c_cc[VKILL]);
    printf("  VEOF   : 0x%X\n", t->c_cc[VEOF]);
    printf("  VMIN   : 0x%X\n", t->c_cc[VMIN]);
    printf("  VTIME  : 0x%X\n", t->c_cc[VTIME]);
}

int main(){

    int fd;
    fd = open("/dev/pts/2", O_RDWR, S_IRWXU);
    if (fd < 0){
        perror("open");
        return 1;
    }

    struct termios trm;
    tcgetattr(fd, &trm);

    //dump_termios(&trm);

    cfmakeraw(&trm);                 // raw mode
    cfsetispeed(&trm, B9600);
    cfsetospeed(&trm, B9600);

    trm.c_cflag |= (CLOCAL | CREAD); // enable receiver

    tcsetattr(fd, TCSANOW, &trm);

    tcflush(fd, TCIFLUSH);

    char msg[64]; 
    printf("Enter text:\n");
    if (scanf("%63s", msg) == 1) {
        // append newline so guests ICANON triggers
        strcat(msg, "\n");
        write(fd, msg, strlen(msg));
    }

    //sleep(1);

    int n;
    unsigned char signal_byte;
    
    // wait for header
    while(1) {
        n = read(fd, &signal_byte, 1);
        if(n > 0 && signal_byte == 0xFF) break;
    }

    // read char
    unsigned char c_val;
    n = read(fd, &c_val, 1); 
    if (n <= 0) printf("failed to read char\n");

    // read freq
    unsigned char freq_val;
    n = read(fd, &freq_val, 1);
    if (n <= 0) printf("failed to read freq\n");
    
    printf("The most frequent character is \"%c\" and it appeared %d times.\n", c_val, freq_val);
    close(fd);

    return 0;

}
