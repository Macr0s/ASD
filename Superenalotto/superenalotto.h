#ifndef SUPERENALOTTO_H_INCLUDED
#define SUPERENALOTTO_H_INCLUDED

typedef int scheda[6];

typedef struct giocate{
    scheda numeri;
    struct giocate* next;
} giocate;

typedef giocate* pgiocata;

int vinto(scheda e, scheda g);

int numVincitori(scheda e, giocate* lg);

void delNonVincitori(scheda e, pgiocata *lg);

#endif // SUPERENALOTTO_H_INCLUDED
