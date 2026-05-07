#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }

    int sorok = 0;
    int ch;
    int utolso_karakter = '\n';

    while ((ch = fgetc(f)) != EOF) {
        if (ch == '\n') {
            sorok++;
        }
        utolso_karakter = ch;
    }

    if (utolso_karakter != '\n' && utolso_karakter != EOF) {
        sorok++;
    }

    fclose(f);
    printf("%d\n", sorok);

    return 0;
}