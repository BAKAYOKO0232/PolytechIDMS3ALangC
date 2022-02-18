/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP4
  COMPLEMENT DE LANGAGE C : POINTEURS
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE :  fonction permet de vider le buffer
------------------------------------------------------
PRECONDITION :
------------------------------------------------------
POSTCONDITION :
------------------------------------------------------
*/
void viderbuffer()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
/*
-----------------------------------------------------
ROLE :
------------------------------------------------------
PRECONDITION :
------------------------------------------------------
POSTCONDITION :
------------------------------------------------------
*/

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int t[5];
    int i, j;
    int *adt;
    for (i = 0, j = 0; i < 5; i++)
        t[i] = j++ + 3 * i;
    for (i = 0; i < 5; i++)
        printf("%d ", t[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(t + i));
    printf("\n");
    for (adt = t; adt < t + 5; adt++)
        printf("%d ", *adt);
    printf("\n");
    for (adt = t + 4; adt >= t; adt--)
        printf("%d ", *adt);
    printf("\n");
    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE :
------------------------------------------------------
PRECONDITION :
------------------------------------------------------
POSTCONDITION :
------------------------------------------------------
*/
