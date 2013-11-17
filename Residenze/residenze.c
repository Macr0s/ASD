#include <stdio.h>
#include <stdlib.h>
#include "residenze.h"

void addResidenze(presidenze* r, int id, int vie, int civico){
    presidenze nuova = malloc(sizeof(residenze));
    nuova->id = id;
    nuova->vie = vie;
    nuova->civico = civico;
    nuova->next = *r;
    *r = nuova;
}


void printIdByVie(presidenze r, pvie v, char nome[25]){
    int id = getIdByNome(v, nome);
    if (id == -1){
        printf("ERRORE: Nome via non esistente");
    }else{
        printf("\nI seguenti id corrispondono alle persone che vivono in %s", nome);
        while(r){
            if (r->vie == id) printf("\n%d", r->id);
            r = r->next;
        }
    }
}


void delByVie(presidenze* r, int v){
    presidenze *cur = r, temp = NULL;
    while (*cur){
        if ((*cur)->vie == v){
            temp = (*cur)->next;
            free(*cur);
            *cur = temp;
        }else
            cur = &((*cur)->next);
    }
}

void printResidenze(presidenze r, pvie p){
    if(r){
        printf("[%d]:\n\tVia: %s\n\tCivico: %d\n", r->id, getNomeById(p, r->vie), r->civico);
        printResidenze(r->next, p);
    }
}

