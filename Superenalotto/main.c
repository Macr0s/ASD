#include <stdio.h>
#include <stdlib.h>
#include "superenalotto.h"

int main()
{
    scheda e = {1,4,16,18, 32,80};
    scheda g1 = {40,50,60,70,80,90};
    scheda g2 = {2,4,6,8,10,12};
    scheda g3 = {1,2,4,8,16,32};

    pgiocata a = malloc(sizeof(giocate));
    (*a).numeri = g1;
    a->next = malloc(sizeof(giocate));
    a->next->numeri = g2;
    a->next->next = malloc(sizeof(giocate));
    a->next->next->numeri = g3;

    printf("%d", numVincitori(e, a));

    return 0;
}
