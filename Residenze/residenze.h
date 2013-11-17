#include <stdio.h>
#include <stdlib.h>
#include "vie.h"

#ifndef RESIDENZE_H_INCLUDED
#define RESIDENZE_H_INCLUDED

typedef struct residenze{
    int id;
    int vie;
    int civico;
    struct residenze* next;
} residenze;

typedef residenze* presidenze;

void addResidenze(presidenze* r, int id, int vie, int civico);

void printIdByVie(presidenze r,pvie v, char nome[25]);

void delByVie(presidenze* r, int vie);

void printResidenze(presidenze r, pvie p);

#endif // RESIDENZE_H_INCLUDED
