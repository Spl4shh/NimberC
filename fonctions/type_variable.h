/* NATANELIC / WAJDA / 4.1 */
/*

Ici on retrouve les differents type utilisés dans le code

*/

#ifndef VARIABLE_H
#define VARIABLE_H 

struct Case                         /* On defini comment est structuree une case du plateau */
{
    int posX;
    int posY;
};
    
typedef struct Case T_Case;         /* On donne l'alias T_Case a la structure Case */

typedef T_Case T_Tab_Case[4];       /* On defini le tableau pour accueillir les 4 cases voisines (au maximum) d'une case choisie */           


#endif