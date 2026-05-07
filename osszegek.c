#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f = fopen("valos_szamok.txt", "r");
    if (f == NULL) {
        fprintf(stderr, "Hiba: A fajlt nem sikerult megnyitni!\n");
        return 1;
    }

    long double osszeg = 0.0;
    char n[128];

    while (fscanf(f, "%s", n) == 1) {
        
        for (int i = 0; n[i] != '\0'; i++) {
            if (n[i] == ',') {
                n[i] = '.';
            }
        }

        long double szam = strtold(n, NULL);
        osszeg += szam;
    }

    printf("%.20Lf\n", osszeg);

    fclose(f);
    return 0;
}