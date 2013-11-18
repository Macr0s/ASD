#ifndef TOMBOLA_H_INCLUDED
#define TOMBOLA_H_INCLUDED

typedef int cartella[3][5];

typedef struct tombola{
    cartella c;
    struct tomola* next;
}tombola;

typedef tombola* ptombola;

typedef struct estratti{
    int numero;
    struct estratti* next;
}estratti;

ptombola get(ptombola* p, int i);

int vincitore(ptombola p, int i, int tipo, estratti* e);

int esisteVincitore(ptombola p, int tipo, estratti *e);

#endif // TOMBOLA_H_INCLUDED
