
#ifndef Ristorante_Roma_Tre_ordinazione_h
#define Ristorante_Roma_Tre_ordinazione_h

typedef struct portata{
    char nome[30];
    int prezzo;
    struct portata* next;
}portata;

typedef struct ordinazione{
    int id;
    struct portata* portata;
    struct ordinazione* next;
}ordinazione;

typedef ordinazione* pordinazione;

portata* inserisciPortata();
ordinazione* inserisciOrdinazione();
void add(pordinazione* ,ordinazione* );

double mediaSup(portata*);
double media(pordinazione ,int);
void mediaDel(pordinazione* ,double);

void stampa(pordinazione);
#endif
