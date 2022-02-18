/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP3
  COMPLEMENT DE LANGAGE C : LE TRI PAR INSERTION DECROISSANT
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/*#include <time.h>*/

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 200 /*Taille Max d'un tableau*/
/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
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
ROLE : Trier(tri par insertion) un Tableau dans l'ordre decroissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre decroissant
------------------------------------------------------
*/
void TriRapideDeCroissant(int Tab[], int n);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int n;
    int T[MAX];

    do
    {
        printf("\nTaille Tableau? : ");
        scanf("%d", &n);
    } while (n < 0 && n > MAX);

    /*Initialisation Tableau*/
    InitialiserTableau(T, n);
    /*Affichage*/
    AfficherTableau(T, n);
    /*Application Tri par Insertion*/
    TriRapideDeCroissant(T, n);
    /*Affichage*/
    AfficherTableau(T, n);

    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
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
void AfficherTableau(int Tab[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d | ", Tab[i]);
        /*if (i % 5 == 0 && i!=0)
        {
            printf("\n");
        }*/
    }
    printf("\n");
}
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
void InitialiserTableau(int Tab[], int n)
{
    int i, upper = 100, lower = 0;
    /*Initialization, should only be called once.
    srand(time(0));
    srand(time(NULL));
    number = (rand() % (upper - lower + 1)) + lower;*/
    /*srand(time(NULL));*/
    for (i = 0; i < n; i++)
    {
        /*on genere un nombre entier entre [lower-upper] = [0-100]*/
        Tab[i] = (rand() % (upper - lower + 1)) + lower;
    }
}

/*
-----------------------------------------------------
ROLE : Trier(tri par insertion) un Tableau dans l'ordre decroissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre decroissant
------------------------------------------------------
*/
void TriRapideDeCroissant(int Tab[], int n)
{
    int i, j, tmp;
    /*on demarre a partir du 2eme elt*/
    for (i = 1; i < n; i++)
    {
        tmp = Tab[i]; /*elt a trie*/
        /*insertion dans la partie trie*/
        j = i;
        while ((j > 0) && (Tab[j - 1] < tmp))
        {
            /*decalage d'un cran sur la gauche*/
            Tab[j] = Tab[j - 1];
            j = j - 1;
        }
        Tab[j] = tmp;
    }
}
