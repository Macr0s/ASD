#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pianocartesiano.h"

int posizioneCorretta(punto* o, punto* n){
    return (n->x < o->x)?1:(n->x == o->x && n->y < o->y)?1:0;
}

void add(ppiano* c, double x, double y){
    punto* p = malloc(sizeof(punto));
    ppiano *temp = c, nuovo = malloc(sizeof(piano));

    p->x = x;
    p->y = y;

    nuovo->p = p;
    nuovo->next = NULL;

    //caso in testa
    if (!*c){
        *c = nuovo;
        return;
    }

    //caso in mezzo
    while (*temp){
        if (posizioneCorretta((*temp)->p,p)){
            nuovo->next = *temp;
            *temp = nuovo;
            return;
        }else
            temp = &((*temp)->next);
    }

    //caso alla fine;
    *temp = nuovo;
}

double distanza(punto* p1, punto* p2){
    return sqrt((p1->x + p2->x)*(p1->x + p2->x) + (p1->y + p2->y)*(p1->y + p2->y));
}

void del(ppiano* c, double x, double y, double d){
    ppiano *cur = c, temp = NULL;
    punto p = {x,y};
    while(*cur){
        if (distanza((*cur)->p, &p) < d){
            temp = (*cur)->next;
            free(*cur);
            *cur = temp;
        }else
            cur = &((*cur)->next);
    }
}

void stampa(ppiano p){
    if (p){
        printf("\n[%lf, %lf]", p->p->x, p->p->y);
        stampa(p->next);
    }
}
