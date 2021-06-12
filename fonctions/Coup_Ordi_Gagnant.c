/* NATANELIC / WAJDA / 4.1 */
/*

Coup Ordi Gagnant : une fonction qui joue un coup gagnant si possible, sinon joue un coup au hasard

*/
#ifndef COUP_ORDI_GAGNANT_C
#define COUP_ORDI_GAGNANT_C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "type_variable.h"
#include "voisine.c"
#include "nimber.c"
#include "hasard.c"
#include "Coup_Ordi_Hasard.c"


void Coup_Ordi_Gagnant(T_Case *Pion, int ligne, int colonne, int nb_voisine, T_Tab_Case vois)
{
    int i = 0, nimb_pion, coup_gagnant = 0, choix ,nimb_vois;
    nimb_pion = Nimber(*Pion, colonne, ligne);

    if (!nimb_pion)
    {
        Coup_Ordi_Hasard(Pion, nb_voisine, vois);                     /* On applique un coup au hasard si le pîon se trouve en case "nulle" */
    }
    else
    {
        while((i < nb_voisine) && !coup_gagnant)                    /* Ici on cherche une case voisine avec un nimber = 0 pour effectuer unu coup gagnant */
        {
            nimb_vois = Nimber(vois[i], colonne, ligne);
            if (!nimb_vois)
            {
                coup_gagnant = 1;
                choix = i;
            }
            i++;
        }
        Pion->posX = vois[choix].posX;
        Pion->posX = vois[choix].posY;
    }
}

#endif