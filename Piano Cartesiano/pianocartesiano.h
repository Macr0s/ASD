#include <stdio.h>
#include <stdlib.h>

#ifndef PIANOCARTESIANO_H_INCLUDED
#define PIANOCARTESIANO_H_INCLUDED

typedef struct{
    double x;
    double y;
} punto;

typedef struct piano{
    punto* p;
    struct piano* next;
} piano;

typedef piano* ppiano;

void add(ppiano* c, double x, double y);

double distanza(punto* p1, punto* p2);
void del(ppiano* c, double x, double y, double d);

void stampa(ppiano p);

#endif // PIANOCARTESIANO_H_INCLUDED
