/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP 6 : Compilation : Test
  COMPLEMENT DE LANGAGE C : Bibliotheque Complexe
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include "complexe.h"

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(void)
{
    /*Declarations*/
    complexe z1, z2;
    /*Traitement*/
    z1 = saisieComplexe();
    z2 = saisieComplexe();
    if (egaliteComplexe(z1, z2) == TRUE)
    {
        printf("\nCes deux nombres complexe sont egaux");
    }
    else
    {
        printf("\nCes deux nombres complexe ne sont pas egaux");
    }
    printf("\nSomme des deux nombres complexes : ");
    printComplexe(sommeComplexe(z1, z2));
    return 0;
}
