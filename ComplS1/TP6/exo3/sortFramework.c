/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n3 TP 6 ==> Tri
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/

#include "./sortFramework.h"

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
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
ROLE : Trier(tri par insertion) un Tableau dans l'ordre croissant
------------------------------------------------------
PRECONDITION : Tab est un tableau d'entier, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant
------------------------------------------------------
*/
void TriInsertionCroissant(int Tab[], int n)
{
    int i, j, tmp;
    /*on demarre a partir du 2eme elt*/
    for (i = 1; i < n; i++)
    {
        tmp = Tab[i]; /*elt a trie*/
        /*insertion dans la partie trie*/
        j = i;
        while ((j > 0) && (Tab[j - 1] > tmp))
        {
            /*decalage d'un cran sur la gauche*/
            Tab[j] = Tab[j - 1];
            j = j - 1;
        }
        Tab[j] = tmp;
    }
}

/*
-----------------------------------------------------
ROLE : Echanger le contenu de deux variables
------------------------------------------------------
PRECONDITION : Les valeurs doivent etre bien definies et initialisees
------------------------------------------------------
POSTCONDITION : Le contenu des 2 sont echangees
------------------------------------------------------
*/
void echange(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

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
void TriSelection(int Tab[], int n)
{
    int i,j,m;
    /*on conside le premier elt est trie et*/
    /*recherche du mini dans la suite du tableau(non trie)*/
    for(i=0; i<n-1; i++)
    {
        m = i; /*rang du plus petit element*/
        for(j=i+1; j<n; j++)
        {
            if (Tab[j]<Tab[m])
            {
                m = j; /*on memorie le nouveau mini*/
            }
        }
        echange(&Tab[i], &Tab[m]); /*on permute les deux elements*/
    }
}
