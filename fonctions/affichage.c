/* NATANELIC / WAJDA / 4.1 */

#ifndef AFFICHAGE_C
#define AFFICHAGE_C

#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"
#include "type_variable.h"


void Affichage(int ligne, int colonne, T_Case Pion)
{   
    int x, y, num_ligne = 1;

    printf(" 0");
    for (x = 1; x <= colonne; x++)
    {
        printf(" %d", x);                                   /* Ici on defini la premiere ligne avec le numero des colonnes */
    }
    printf("\n");
    for (y = 1; y <= ligne; y++)
    {
        printf("%2d", num_ligne);
        for (x = 1; x <= colonne; x++)                      /* Ici on defini les differentes lignes en fonction du nombre de colonnes */
        {
            if (x == Pion.posX && y == Pion.posY)           /* Ici on verifiera si le pion est sur la case affiché ou non */
            {
                printf("|0");                               /* Affichage graphique du Pion */
            }
            else
            {
                printf("|-");                               /* Affichage graphique d'une case vide */
            }
        }
        num_ligne++;
        printf("|");
        printf("\n");
    }

}

#endif