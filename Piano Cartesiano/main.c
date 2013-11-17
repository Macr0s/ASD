#include <stdio.h>
#include <stdlib.h>
#include "pianocartesiano.h"

int main()
{
    ppiano p = NULL;

    stampa(p);

    add(&p, 1.0,3.0);
    add(&p, 1.0,2.0);
    add(&p, -1.0, 4.0);
    add(&p , 0.0, 1.0);

    stampa(p);

    printf("\n\nProva di cancellazione");
    del(&p, 0.0,0.0, 3);

    stampa(p);

    return 0;
}
