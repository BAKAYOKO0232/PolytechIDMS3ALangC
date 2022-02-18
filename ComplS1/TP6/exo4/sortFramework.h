/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n3 TP 6 ==> Tri
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 100
/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/

/*
-----------------------------------------------------
ROLE :  fonction permet de vider le buffer 
------------------------------------------------------
PRECONDITION : None
------------------------------------------------------
POSTCONDITION : Le buffer est vide
------------------------------------------------------
*/
void viderbuffer();

/*
-----------------------------------------------------
ROLE : Afficher un Tableau
------------------------------------------------------
PRECONDITION : Aucune
------------------------------------------------------
POSTCONDITION : Le contenu de Tab est afficher sur le
Terminal
------------------------------------------------------
*/
void AfficherTableau(int Tab[], int n);
/*
-----------------------------------------------------
ROLE : Initialiser un Tableau
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont initialisees
------------------------------------------------------
*/
void InitialiserTableau(int Tab[], int n);

/*
-----------------------------------------------------
ROLE : Trier(tri par insertion) un Tableau dans l'ordre croissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant
------------------------------------------------------
*/
void TriInsertionCroissant(int Tab[], int n);

/*
-----------------------------------------------------
ROLE : Echanger le contenu de deux variables
------------------------------------------------------
PRECONDITION : Les valeurs doivent etre bien definies et initialisees
------------------------------------------------------
POSTCONDITION : Le contenu des 2 sont echangees
------------------------------------------------------
*/
void echange(int *a, int *b);

/*
-----------------------------------------------------
ROLE : Trier(tri par selection) un Tableau dans l'ordre croissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant
------------------------------------------------------
*/
void TriSelection(int Tab[], int n);

/*
-----------------------------------------------------
ROLE : Trier(tri Rapide) un Tableau dans l'ordre croissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant
------------------------------------------------------
*/
void TriRapide(int Tab[], int gauche, int droite);


/*
-----------------------------------------------------
ROLE : Partitionnner un tableau en deux
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant
------------------------------------------------------
*/
void partition(int Tab[], int premier, int dernier, int indicePivot);
