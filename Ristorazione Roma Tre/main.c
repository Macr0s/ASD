#include <stdio.h>
#include "ordinazione.h"

int main(int argc, const char * argv[])
{
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


