/* NATANELIC / WAJDA / 4.1 */
/*

Fonction qui permet de renvoyer un nombre au hasard entre 2 bornes

*/
#ifndef HASARD_C
#define HASARD_C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "hasard.h"

int hasard (int valmin, int valmax)
{
    int resultat;

    srand((unsigned int) time(NULL));
    resultat = (rand() %(valmax-valmin) + valmin);                          /* Un nombre au hasard est choisi entre les 2 bornes rentrees en parametres */
    return(resultat);
}

#endif