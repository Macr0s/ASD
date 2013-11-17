#include <stdio.h>
#include <stdlib.h>


#ifndef VIE_H_INCLUDED
#define VIE_H_INCLUDED

typedef struct vie{
    int id;
    char nome[25];
    struct vie* next;
} vie;

typedef vie* pvie;

void addVie(pvie* v, int id, char nome[25]);

char* getNomeById(pvie v, int i);
int getIdByNome(pvie v, char nome[25]);

#endif // VIE_H_INCLUDED
