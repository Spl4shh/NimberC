/* NATANELIC / WAJDA / 4.1 */
/*

Coup_Ordi_Hasard : une fonction qui gère le coup au hasard
réalisé par l’ordinateur
(choisir au hasard une voisine de la case contenant le pion).

*/
#ifndef COUP_ORDI_HASARD_C
#define COUP_ORDI_HASARD_C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type_variable.h"
#include "voisine.c"
#include "hasard.c"


void Coup_Ordi_Hasard(T_Case *Pion, int nb_voisine, T_Tab_Case vois)
{
    int choix;
    if (nb_voisine == 1)                                /* Ici on defini le cas lorsqu'on a qu'une seule voisine */
    {
        Pion->posX = vois[0].posX;
        Pion->posY = vois[0].posY;
    }
    else                                                /* Ici on definira le cas general */
    {
        choix = hasard (0, nb_voisine - 1);
        Pion->posX = vois[choix].posX;
        Pion->posY = vois[choix].posY;
    }
}
#endif