#ifndef ORDINAZIONE_C_INCLUDED
#define ORDINAZIONE_C_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include "ordinazione.h"

portata* inserisciPortata(){
    portata* p = malloc(sizeof(portata));
    char risposta;

    printf("inserisci nome della portata: ");
    scanf(" %s",p->nome);
    printf("inserisci il prezzo della portata: ");
    scanf("%d",&p->prezzo);
    printf("\n");
    printf("Si vuole continuare?(y/n)");
    scanf(" %c",&risposta);
    if(risposta=='y') p->next = inserisciPortata();
    else p->next = NULL;
    return p;
}

ordinazione* inserisciOrdinazione(){
    ordinazione* o = malloc(sizeof(ordinazione));

    printf("Inserisci l'id dell'ordine: ");
    scanf("%d",&o->id);
    o->portata = inserisciPortata();
    o->next = NULL;
    return o;

}

void add(pordinazione* o, ordinazione* n){
    if(o) n->next = *o;
    *o = n;
}

double mediaSup(portata* p){
    double r = 0,i =0;
    while (p) {
        i++;
        r = r + p->prezzo;
        p = p ->next;
    }
    return r/i;
}

double media(pordinazione o,int id){
    double r = -1; //se non trovo l'id

    while(o && r==-1){
        if(o->id == id) r = mediaSup(o->portata);
        o = o->next;
    }
    return r;
}

void mediaDel(pordinazione* o, double m){
    pordinazione temp;
    if (*o){
        if (mediaSup((*o)->portata) <= m){
            temp = (*o)->next;
            free(*o);
            *o = temp;
            mediaDel(o, m);
        }else{
            mediaDel(&((*o)->next), m);
        }
    }
}

void stampaPortata(portata* p){
    if (p){
        printf("\t %s (%d)\n", p->nome, p->prezzo);
        stampaPortata(p->next);
    }
}

void stampa(pordinazione p){
    if(p){
        printf("[%d]: \n", p->id);
        stampaPortata(p->portata);
        stampa(p->next);
    }
}

#endif // ORDINAZIONE_C_INCLUDED
