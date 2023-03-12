#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Niepoprawna liczba argumentow.\n");
		printf("Uzycie: copy <plik_zrodlowy> <plik_docelowy>\n");
	return -1;
}

int fd_src, fd_dst;
char buf[SIZE];
int bytes_read;

// otworz plik zrodlowy
fd_src = open(argv[1], O_RDONLY);
if (fd_src == -1) {
    printf("Blad przy otwieraniu pliku zrodlowego.\n");
    return -1;
}

// utworz plik docelowy
fd_dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
if (fd_dst == -1) {
    printf("Blad przy tworzeniu pliku docelowego.\n");
    close(fd_src);
    return -1;
}

// kopiuj plik zrodlowy do pliku docelowego
while ((bytes_read = read(fd_src, buf, SIZE)) > 0) {
    if (write(fd_dst, buf, bytes_read) == -1) {
        printf("Blad przy zapisie do pliku docelowego.\n");
        close(fd_src);
        close(fd_dst);
        return -1;
    }
}

// zamknij plik zrodlowy i docelowy
close(fd_src);
close(fd_dst);

printf("Plik zrodlowy zostal skopiowany do pliku docelowego.\n");

return 0;
}
