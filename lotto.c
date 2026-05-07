#include<stdio.h>
#include<stdlib.h>

int main() {
    srandom(100);
    int n = 0;
    int min = 0;
    int max = 0;
    int tomb[1000] = {0};
    printf("Hány db random számot kérsz? ");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &min);
    printf("Felső határ: ");
    scanf("%d", &max);

    int gdb = 0;
    while(n > gdb) 
    {
        int szam = rand() % (max-min+1) + min;
        int belerakjuk = 1;

        for(int i = 0; i < gdb; i++) 
        {
            if (tomb[i] == szam) {
                belerakjuk = 0;
            }
        }
        if(belerakjuk == 1) 
        {
            tomb[gdb] = szam;
            gdb = gdb + 1;
        }
    }

    printf("Rendezetlen számok: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if(tomb[i] < tomb[j]) 
            {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            
            }
        }
    }

    printf("A generált számok: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");


}