#include <stdio.h>
#include <stdlib.h>
#include "superenalotto.h"

int vinto(scheda e, scheda g){
    int i = 0, j = 0, r = 0;
    while(i < 6 && j < 6)
        if (e[i] == g[j]){
            r += 1;
            if(i<6) i += 1;
            if (j<6) j += 1;
        }else if (e[i] < g[j])
            if (i<6) i += 1;
        else if (e[i] > g[j])
            if (j<6) j += 1;
    return r;
}

int numVincitori(scheda e, giocate* lg){
    if (lg)
        if (vinto(e, lg->numeri) >= 3)
            return 1 + numVincitori(e, lg->next);
        else
            return 0;
    else
        return 0;
}

/*

*/

void delNonVincitori(scheda e, pgiocata *lg){
    pgiocata temp;
    if(*lg)
        if (vinto(e, (*lg)->numeri) <= 3){
            temp = (*lg)->next;
            free(*lg);
            (*lg) = temp;
            delNonVincitori(e, lg);
        }else
            delNonVincitori(e, &((*lg)->next)
}

/*
    PSEUDOCOSIDCE

    VINTO(e,g)
        i = 0
        j = 0
        r = 0
        while i < 6 and j < 6 do
            if e[i] == g[j] then
                r = r + 1
                if (i < 6) then i = i + 1
                if (j < 6) then j = j + 1
            else if e[i] < g[j] then
                if (i < 6) then i = i + 1
            else if e[i] > g[j] then
                if (j < 6) then j = j + 1
        return r

    NUMVINCITORI(e, lg)
        if lg.head != NULL then
            if vinto(e, l.numeri) >= 6 then
                return 1 + numvincitori(e, lg.next)
            else
                return 0
        else
            return 0

    DELNONVINCITORI(e, lg)
    if (lg.head != NULL) then
        if vinto(e, l.numeri) <= 3 then
            l.head = l.head.next
        else
            -> temp è una variabile che corrispone a una lista di giocate
            temp.head = l.head.next
            delnonvincitori(e, temp)
*/
