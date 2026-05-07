#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int *mutat;
    int szamok[SIZE];
    int meret = SIZE;
    srandom(time(NULL));
    
    printf("A tömb elemei: ");
    for(int i = 0; i < meret; ++i)
    {
        int random_szam = 11 + rand() % (98 - 11 + 1 );
        szamok[i] = random_szam;
        if(i == 9)
        {
            printf("%d\n", szamok[i]);
            break;
        }
        printf("%d ", szamok[i]);
    }
    return 0;
}