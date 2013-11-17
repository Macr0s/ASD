#include <stdio.h>
#include <stdlib.h>
#include "residenze.h"

int main()
{
    presidenze r = NULL;
    pvie p = NULL;

    addVie(&p, 10, "Vasca Navale");
    addVie(&p, 22, "Corrado Segre");

    addResidenze(&r, 50, 10, 16);
    addResidenze(&r, 63, 10, 18);
    addResidenze(&r, 13, 22, 4);

    printResidenze(r, p);

    printf("TEST DI STAMPA IN BASE ALLA VIA\n");
    printIdByVie(r, p, "Vasca Navale");

    printf("\n\nTEST DI CANCELLAZIONE\n");
    delByVie(&r, 10);
    printResidenze(r, p);

    return 0;
}
