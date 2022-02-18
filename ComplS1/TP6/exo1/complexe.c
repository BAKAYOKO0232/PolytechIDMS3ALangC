/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP 6 : Compilation
  COMPLEMENT DE LANGAGE C : Bibliotheque Complexe
----------------------------------------------------*/
#include <stdio.h>
#include "./complexe.h"


/*----------------------------------------------------*/
/*          DEFINITIONS PROCEDURES & FONCTIONS        */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Permet d'afficher un nombre complexe
------------------------------------------------------
PRECONDITION : z est un nombre complexe
------------------------------------------------------
POSTCONDITION : affiche sur le terminal z = a + ib
------------------------------------------------------
*/
void printComplexe(complexe z)
{
    printf("\nz = %d+i%d\n",z.a,z.b);
}

/*
-----------------------------------------------------
ROLE : Permet de saisir un nombre complexe
------------------------------------------------------
PRECONDITION : None
------------------------------------------------------
POSTCONDITION : renvoi z
------------------------------------------------------
*/
complexe saisieComplexe(void)
{
    complexe z;
    printf("\npartie reelle? : ");
    scanf("%d", &z.a);
    printf("\npartie imaginaire? : ");
    scanf("%d", &z.b);
}

/*
-----------------------------------------------------
ROLE : Permet de faire la somme de deux nombre complexe
------------------------------------------------------
PRECONDITION : z1 & z2 sont deux nombre complexe
------------------------------------------------------
POSTCONDITION : retourne z1+z2 = (a1+a2)+i(b1+b2)
------------------------------------------------------
*/
complexe sommeComplexe(complexe z1, complexe z2)
{
    complexe z;

    z.a = z1.a + z2.a;
    z.b = z1.b + z2.b;
    return z;
}

/*
-----------------------------------------------------
ROLE : Permet de verifier si deux nombres complexes
sont egaux
------------------------------------------------------
PRECONDITION : z1 & z2 sont deux nombre complexe
------------------------------------------------------
POSTCONDITION : retourne TRUE si z1 = z2, FALSE sinon
(a1 = a2) & (b1=b2)
------------------------------------------------------
*/
enum booleen egaliteComplexe(complexe z1, complexe z2)
{
    if (z1.a == z2.a && z1.b == z2.b)
        return TRUE;
    return FALSE;
}
