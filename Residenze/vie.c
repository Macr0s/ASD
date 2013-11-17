#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vie.h"

void addVie(pvie* v, int id, char nome[25]){
    pvie nuovo = malloc(sizeof(vie));
    nuovo->id = id;
    int i;
    for(i = 0; i< 25; i++)
        nuovo->nome[i] = nome[i];
    nuovo->next = *v;
    *v = nuovo;
}


char* getNomeById(pvie v, int i){
    while(v){
        if (v->id == i) return v->nome;
        v = v->next;
    }
    return NULL;
}


int getIdByNome(pvie v, char nome[25]){
    while(v){
        if (strcmp(v->nome, nome) == 0) return v->id;
        v = v->next;
    }
    return -1;
}

