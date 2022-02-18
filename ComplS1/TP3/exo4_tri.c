/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n4 TP
  COMPLEMENT DE LANGAGE C : TRI SELECTION
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
    /*Application Tri par Selection*/
    TriSelection(T, n);
    /*Affichage*/
    AfficherTableau(T, n);

    return 0;
}


/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
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
