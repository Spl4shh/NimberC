/* NATANELIC / WAJDA / 4.1 */
/*

Ici on determine les parametres du jeux

*/
#ifndef PARAMETRES_C
#define PARAMETRES_C

#include <stdio.h>
#include <stdlib.h>
#include "Parametres.h"
#include "Lire_entier.c"
#include "Lire_entier.h"


void Parametres(int *nlig, int *ncol, int *niveau, int *next)
{
    printf("Tu vas choisir le nombre de ligne \n");
    *nlig = Lire_entier(vmin, vmax);
    printf("Tu vas choisir le nombre de colonne \n");
    *ncol = Lire_entier(vmin, vmax);
    printf("Tu vas choisir le niveau de difficulte : \n 1 : Niveau debutant  \n 2 : Niveau moyen  \n 3 : Niveau expert  \n 4 : Niveau virtuose \n");
    *niveau = Lire_entier(1, 4);
    printf("Tu vas choisir le premier joueur, 1 pour l'ordinateur et 2 pour l'utilisateur : \n");
    *next = Lire_entier(1, 2);
}

#endif