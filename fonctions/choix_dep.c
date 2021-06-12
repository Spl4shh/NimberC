/* NATANELIC / WAJDA / 4.1 */

#ifndef CHOIX_DEP_C
#define CHOIX_DEP_C

#include <stdio.h>
#include <stdlib.h>
#include "Lire_entier.c"
#include "type_variable.h"


void choix_dep(int nb_voisine, T_Tab_Case vois, T_Case *pion)
{
    int cf = 0, nb_choix, num_choix, i;

    if (nb_voisine == 1)
    {
        printf("\nUnique choix possible : (%d;%d)\n", vois[0].posX, vois[0].posY);
        printf("Pour valider, veuillez entrer 1 \n");                                          /* Vu qu'il n'y a qu'une seule possibilite, on demande uniquement a l'utilisateur de valider*/
        num_choix = Lire_entier(1, 1);
        pion->posX=vois[num_choix - 1].posX;
        pion->posY=vois[num_choix - 1].posY;
    }
    else
    {
        for (i = 0; i < nb_voisine; i++)
        {
            printf("\nChoix %d : (%d;%d)", i+1, vois[i].posX, vois[i].posY);        /* Ici on affiche les differents deplacements possible a l'utilisateur */
        }

        printf("\nVeuillez choisir votre deplacement : ");
        num_choix = Lire_entier (1, nb_voisine);

        if (nb_voisine==2)                                                          /* On appliqueras un cas differents en fonction du nombre de voisine et du choix de l'utilisateur */
        {
            do
            {
                    switch (num_choix)
                    {
                    case 1:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                        cf=1;
                        break;
                    case 2:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                        cf=1;
                        break;
                                    
                    default:
                        break;
                    }
            }while (cf == 0);
        }
        else if (nb_voisine==3)
        {
            do
            {
                    switch (num_choix)
                    {
                    case 1:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                        cf=1;
                        break;
                    case 2:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                        cf=1;
                        break;
                    case 3:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                        cf=1;
                        break;
                                    
                    default:
                        break;
                    } 
            }while (cf == 0);
        }
        else if (nb_voisine==4)
        {
            do
            {
                switch (num_choix)
                {
                case 1:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                    cf=1;
                    break;
                case 2:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                    cf=1;
                    break;
                case 3:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                    cf=1;
                    break;
                case 4:
                    pion->posX=vois[num_choix-1].posX;
                    pion->posY=vois[num_choix-1].posY;
                    cf=1;
                    break;
                                    
                default:
                    break;
                }
            }while (cf ==  0); 
        }
    }   
}

#endif