#ifndef COMPLEXE_H
#define COMPLEXE_H
/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP 6 : Compilation
  COMPLEMENT DE LANGAGE C : Bibliotheque Complexe
----------------------------------------------------*/
/*inclusion bibliotheque*/

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
/*Definition Type booleen*/
enum booleen {FALSE, TRUE};
/*Definition Type complexe*/
typedef struct
{
    float a; /*partie reelle*/
    float b; /*partie imaginaire*/
} complexe;

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
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
void printComplexe(complexe z);

/*
-----------------------------------------------------
ROLE : Permet de saisir un nombre complexe
------------------------------------------------------
PRECONDITION : None
------------------------------------------------------
POSTCONDITION : renvoi z
------------------------------------------------------
*/
complexe saisieComplexe(void);

/*
-----------------------------------------------------
ROLE : Permet de faire la somme de deux nombre complexe
------------------------------------------------------
PRECONDITION : z1 & z2 sont deux nombre complexe
------------------------------------------------------
POSTCONDITION : retourne z1+z2 = (a1+a2)+i(b1+b2)
------------------------------------------------------
*/
complexe sommeComplexe(complexe z1, complexe z2);

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
enum booleen egaliteComplexe(complexe z1, complexe z2);

#endif