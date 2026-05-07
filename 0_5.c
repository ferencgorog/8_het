#include <stdio.h>

int main() {
    FILE *be = fopen("in.txt", "r");
    FILE *ki = fopen("out.txt", "w");

    printf("in.txt sikeresen megnyitva\n");

    double szam;
    int db = 0;

    printf("0,5-nél nagyobb számok szűrése...\n");

    while (fscanf(be, "%lf", &szam) == 1) {
        if (szam > 0.5) {
            fprintf(ki, "%f\n", szam);
            db++;
        }
    }

    printf("szűrés vége\n");

    fclose(be);
    fclose(ki);
    printf("out.txt bezárva\n");
    printf("out.txt-be kiírt számok mennyisége: % d db\n", db);

    return 0;
}