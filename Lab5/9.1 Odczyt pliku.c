#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 512

int main(int argc, char *argv[]) {
    int fd;
    char buf[BUFSIZE];
    ssize_t nread;

    if (argc < 2) {
        printf("Uzycie: %s <file>\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    while ((nread = read(fd, buf, BUFSIZE)) > 0) {
        if (write(1, buf, nread) != nread) {
            perror("write");
            return 1;
        }
    }

    if (nread == -1) {
        perror("read");
        return 1;
    }

    if (close(fd) == -1) {
        perror("close");
        return 1;
    }

    return 0;
}
