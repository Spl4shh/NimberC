/* NATANELIC / WAJDA / 4.1 */
/*

On calcul le nimber de la case entree en parametre

*/
#ifndef NIMBER_C
#define NIMBER_C

#include <stdio.h>
#include <stdlib.h>
#include "type_variable.h"

int Nimber(T_Case Pion, int nb_col, int nb_ligne)
{
    int nimb;
    int EcartBase, EcartCase;

    EcartBase = (nb_ligne % 3) - (nb_col % 3);                              /* Ici on calcul l'ecart de base afin d'avoir la valeur de reference */
    EcartCase = (Pion.posY % 3) - (Pion.posX % 3);                          /* Ici on calcul l'ecart de la case en parametre pour la comparer a la valeur de reference */
    if (EcartBase != EcartCase)                                             /* Ici on definira le nimber */
    {
        nimb = 1;
    }
    else
    {
        nimb = 0;
    }
    return(nimb);
}

#endif