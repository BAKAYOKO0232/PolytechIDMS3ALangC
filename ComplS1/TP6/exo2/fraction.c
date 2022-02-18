/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP6 : Fraction
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include <stdlib.h>
#include "./ioFraction.h"
#include "./fraction.h"
#include "./calculFraction.h"

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
void viderbuffer(){char c; while ((c=getchar()) != '\n' && c!=EOF);}


/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    t_fraction f1,f2;

    printf("\nSaisie 2 fractions\n");
    f1=saisieFraction();
    f2=saisieFraction();
    /**/
    if (egalFractions(f1,f2) == TRUE)
    {
        printf("\nCes deux fractions sont egales\n");
    }else{
        printf("\nCes deux fractions ne sont pas egales\n");
    }
    /**/
    printf("\nSomme des deux fractions : \n");
    afficheFraction(addFractions(f1,f2));
    /**/
    printf("\nProduit des deux fractions : \n");
    afficheFraction(multFractions(f1,f2));
    return 0;
}
