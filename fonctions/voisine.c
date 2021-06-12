/* NATANELIC / WAJDA / 4.1 */

#ifndef VOISINE_C
#define VOISINE_C

#include <stdio.h>
#include <stdlib.h>
#include "voisine.h"
#include "type_variable.h"

#define MAX_DEP 2

void Voisine(T_Case Pion, int nb_ligne, int nb_colonne, int *nb_voisine, T_Tab_Case vois)
{
    int i;

    *nb_voisine = 0;                                                    /* nb_voisine permet de definir le nombre de voisine et de placer les coordonnees des cases dans le tableau */    
    for (i = 1; i < MAX_DEP + 1; i++)
    {
        if(Pion.posX + i <= nb_colonne)                                 /* On test si il existe une case jusqu'a +MAX_DEP a droite */
        {
        vois[*nb_voisine].posX = Pion.posX + i;
        vois[*nb_voisine].posY = Pion.posY;
        *nb_voisine += 1;
        }
    }
    for (i = 1; i < MAX_DEP + 1; i++)
    {
        if(Pion.posY + i <= nb_ligne)                                     /* On test si il existe une case jusqu'a +MAX_DEP en dessous */
        {
        vois[*nb_voisine].posX = Pion.posX;
        vois[*nb_voisine].posY = Pion.posY + i;
        *nb_voisine += 1;
        }
    }
}

#endif