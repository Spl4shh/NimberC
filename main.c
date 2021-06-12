/*

Voici notre jeu du NIM

NATANELIC Romain
et
WAJDA Adrien

*/

/*

Importations des fonctions et bibliotheques

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./fonctions/affichage.c"
#include "./fonctions/type_variable.h"
#include "./fonctions/choix_dep.c"
#include "./fonctions/Parametres.c"
#include "./fonctions/Lire_entier.c"
#include "./fonctions/voisine.c"
#include "./fonctions/nimber.c"
#include "./fonctions/hasard.c"
#include "./fonctions/Coup_Ordi_Hasard.c"
#include "./fonctions/Coup_Ordi_Gagnant.c"

/*

Definition des constantes

*/

#define VMIN 5
#define VMAX 30

/* Fonction principale */

int main()
{   
    int rejouer = 1;

                                                                       /* Affichage du titre du jeu */
    printf("       _                  _              _           \n      | |                | |            (_)          \n      | | ___ _   _    __| | ___   _ __  _ _ __ ___  \n  _   | |/ _ \\ | | |  / _` |/ _ \\ | '_ \\| | '_ ` _ \\ \n | |__| |  __/ |_| | | (_| |  __/ | | | | | | | | | |\n  \\____/ \\___|\\__,_|  \\__,_|\\___| |_| |_|_|_| |_| |_|\n\n");
    while (rejouer == 1)                                               /* Option qui permet a l'utilisateur de rejouer sans relancer le programme */
    {

        T_Case Pion;
        Pion.posX = 1;
        Pion.posY = 1;

        int nb_voisine;
        T_Tab_Case voisine;                                             /* Definition du tableau pour accueillir les cases voisines */

        int i;                                                          /* Compteur */

        int nlig, ncol, niveau, next, proba;                            /* Definition des variables */
        
        Parametres(&nlig, &ncol, &niveau, &next);                       /* Lecture des parametres */


        Affichage(nlig, ncol, Pion);
        while ((Pion.posX != ncol) || (Pion.posY != nlig))              /* Autorise a jouer seulement si le pion n'est pas sur le puit */
        {
            printf("\n\n");
            Voisine(Pion, nlig, ncol, &nb_voisine, voisine);
            if (next == 1)                                              /* Code ORDINATEUR */
            {
                
                switch (niveau)                                         /* Applique le cas au niveau choisi en debut de partie */
                {
                case 1:
                    Coup_Ordi_Hasard(&Pion, nb_voisine, voisine);
                    break;
                
                case 2:
                    proba = hasard(1, 3);
                    switch (proba)
                    {
                        case 1 : case 2 :
                            Coup_Ordi_Hasard(&Pion, nb_voisine, voisine);
                            break;
                    
                        case 3 :
                            Coup_Ordi_Gagnant(&Pion, nlig, ncol, nb_voisine, voisine);
                    }
                    break;
                
                case 3:
                    proba = hasard(1, 3);
                    switch (proba)
                    {
                        case 1 :
                            Coup_Ordi_Hasard(&Pion, nb_voisine, voisine);
                            break;
                    
                        case 2 : case 3 :
                            Coup_Ordi_Gagnant(&Pion, nlig, ncol, nb_voisine, voisine);
                    }
                    break;
                
                case 4:
                    Coup_Ordi_Gagnant(&Pion, nlig, ncol, nb_voisine, voisine);
                    break;
                }
            printf("L'ordinateur a joue, le pion est en (%d ; %d) \n", Pion.posX, Pion.posY);
            }
            if (next == 2)                                              /* Code UTILISATEUR */
            {
                printf("A toi de jouer !\n");
                choix_dep(nb_voisine, voisine, &Pion);                  /* Propose a l'utilisateur les differents deplacements possible et le fait choisir */
                printf("L'utilisateur a joue, le pion est en (%d ; %d) \n", Pion.posX, Pion.posY);
            }
            Affichage(nlig, ncol, Pion);

            if (next == 1)                                              /* Changement de joueur */
            {
                next = 2;
            }
            else
            {
                next = 1;
            }
            
        }
        if (next == 1)                                                  /* Affiche un message en fonction de qui a gagne */
        {
            printf("L'utilisateur a gagne\n");
        }
        else
        {
            printf("L'ordinateur a gagne\n");
        }
        printf("Si vous voulez rejouer, ecrivez 1 sinon 0 \n");
        rejouer = Lire_entier(0, 1);
    }
    printf("Nous vous remercions d'avoir joue \n\n\nJeu cree par \nNATANELIC Romain \net \nWAJDA Adrien");
}
