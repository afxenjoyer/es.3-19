#include <stdio.h>

int main(void)
{
    int lato1;
    int lato2;
    int lato3;

    printf("Inserisci il primo lato (in cm)\n");
    scanf("%d", &lato1);
    printf("Inserisci il secondo lato (in cm)\n");
    scanf("%d", &lato2);
    printf("Inserisci il terzo lato (in cm)\n");
    scanf("%d", &lato3);

    if (lato1 == lato2 && lato3 == lato1)
    {
        printf("Il triangolo descritto è un triangolo equilatero\n");
    }
    else if (lato1 == lato2 && lato3 != lato1)
    {
        printf("Il triangolo descritto è un triangolo isoscele\n");
    }
    else if (lato1 != lato2 && lato3 != lato1)
    {
        printf("Il triangolo descritto è un triangolo scaleno\n");
    }

    return 0;
}
