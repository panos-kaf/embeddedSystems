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
    fd = open("/dev/ttys004", O_RDWR, S_IRWXU);
    if (fd < 0){
        perror("open");
        printf("open failed\n");
        return 1;
    }

    struct termios trm;
    tcgetattr(fd, &trm);

    dump_termios(&trm);

    cfmakeraw(&trm);                 // raw mode
    cfsetispeed(&trm, B9600);
    cfsetospeed(&trm, B9600);

    trm.c_cflag |= (CLOCAL | CREAD); // enable receiver

    tcsetattr(fd, TCSANOW, &trm);

    char msg[64] = "test test 123\n";
    int cnt = 64;

    write(fd, msg, strlen(msg));

    //sleep(1);

    char buf[64];
    int n = read(fd, buf, sizeof(buf) - 1);
    if (n > 0) {
        buf[n] = '\0';
        printf("%s", buf);
    }

    close(fd);

    return 0;

}
