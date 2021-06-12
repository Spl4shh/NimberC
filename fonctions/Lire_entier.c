/* NATANELIC / WAJDA / 4.1 */
/*

On écrira tout d’abord une fonction Lire_Entier qui permet de saisir et de retourner un entier
compris entre deux bornes données.


*/
#ifndef LIRE_ENTIER_C
#define LIRE_ENTIER_C

#include <stdio.h>
#include "Lire_entier.h"

int Lire_entier (int binf, int bsup)
{
    int NB;
    do
    {
        printf("Veuillez saisir un nombre compris entre %d et %d \n", binf, bsup);
        scanf("%d", &NB);
        getchar();
    } while (NB > bsup || NB < binf);                                                   /* Il faut que le nombre saisie sois compris entre les deux bornesS */
    printf("\n");
    return(NB);
}


#endif