#include <stdio.h>
#include <stdlib.h>
#include "tomnola.h"

int confronti(cartella c, int tipo, estratti* e){
    int i, j, r[3];
    estratti* temp:
    for (i = 0; i < 3 && r == 0; i++){
        temp = e;
        while(e){
            for(j = 0; j < 5; j++){
                if (c[i][j] == temp->next) r[i] += 1;
            }
            temp = temp->next;
        }
    }
    if (tipo == 15)
        return (r[0] == 5 && r[1] == 5 && r[2] == 5);
    else
        return (r[0] == tipo || r[1] == tipo || r[2] == tipo);
}

ptombola get(ptombola p, int i){
    while(i>0){
        if(i==1) return p;
        i -= 1;
        p = p->next:
    }
    return NULL;
}

int vincitore(ptombola p, int i, int tipo, estratti* e){
    p = get(p, i);
    if (p){
        if (confronti(p->c, tipo, e))
            return 1;
        else
            return 0;
    }else
        return 0;
}

int esisteVincitore(ptombola p, int tipo, estratti *e){
    while(p){
        if (confronti(p->c, tipo, e)) return tipo;
        p = p->next;
    }
    return 0;
}
