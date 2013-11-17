#include <stdio.h>
#include "ordinazione.h"

int main(int argc, const char * argv[])
{
    // 1 tua 10 y sorella 20 n 2 oddi 12 y salvoni 17 n 6 oddi 12 y salvoni 17 n  3 vin 10 y diesel 30 n 1 2 3 17
    // 3 vin 10 y diesel 30 n 1 tua 10 y sorella 20 n 2 oddi 12 y salvoni 17 n 1 2 3 17
    pordinazione p = NULL;

    stampa(p);

    add(&p, inserisciOrdinazione());
    add(&p, inserisciOrdinazione());
    add(&p, inserisciOrdinazione());
    add(&p, inserisciOrdinazione());

    stampa(p);

    int id;

    printf("\n Inserisci l'id che vuoi calcolare la media");
    scanf("%d", &id);
    printf("La sua media è: %lf", media(p,id));

    printf("\n Inserisci l'id che vuoi calcolare la media");
    scanf("%d", &id);
    printf("La sua media è: %lf", media(p,id));

    printf("\n Inserisci l'id che vuoi calcolare la media");
    scanf("%d", &id);
    printf("La sua media è: %lf", media(p,id));

    printf("\n");

    stampa(p);

    double max;

    printf("Inserisci il massimo valore della media");
    scanf("%lf", &max);

    mediaDel(&p, max);

    stampa(p);



    return 0;
}


