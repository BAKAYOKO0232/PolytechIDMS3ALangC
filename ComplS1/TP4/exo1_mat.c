/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP4
  COMPLEMENT DE LANGAGE C : programme qui permet à l'utilisateur de remplir
  entièrement deux matrices carrées M1 et M2 et qui affiche les matrices
  S = M1 + M2, D = M1 - M2 et P = M1 * M2.
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 50 /*taille max Matrice*/
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
ROLE : Initialiser une matrice carre
------------------------------------------------------
PRECONDITION : M est une matrice carre, n est
la dimension (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de M sont initialisees
------------------------------------------------------
*/
void InitialiserTableau(int M[MAX][MAX], int n);

/*
-----------------------------------------------------
ROLE : Afficher une matrice
------------------------------------------------------
PRECONDITION : Aucune
------------------------------------------------------
POSTCONDITION : Le contenu de M est afficher sur le
Terminal
------------------------------------------------------
*/
/*void AfficherTableau(int M[MAX][MAX], int n);*/
void AfficherTableau(int M[][MAX], int n);

/*
-----------------------------------------------------
ROLE : Permet de faire la somme de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 + M2
------------------------------------------------------
*/
void sommeMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n);
/*
-----------------------------------------------------
ROLE : Permet de faire la difference de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 - M2
------------------------------------------------------
*/
void differenceMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n);
/*
-----------------------------------------------------
ROLE : Permet de faire le produit de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 * M2
------------------------------------------------------
*/
void produitMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    /*Declarations*/
    int n; /*dimension*/
    int M1[MAX][MAX];
    int M2[MAX][MAX];
    int M[MAX][MAX];
    /*Initialisation*/

    do
    {
        printf("\nTaille Matrice [1-%d] : ", MAX);
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

    InitialiserTableau(M1, n);
    InitialiserTableau(M2, n);

    printf("\nM1\n");
    AfficherTableau(M1, n);
    printf("\nM2\n");
    AfficherTableau(M2, n);
    /*M1+M2*/
    sommeMatriceCarre(M1, M2,M, n);
    printf("\nM1+M2\n");
    AfficherTableau(M, n);
    /*M1-M2*/
    differenceMatriceCarre(M1, M2,M, n);
    printf("\nM1-M2\n");
    AfficherTableau(M, n);
    /*M1*M2*/
    produitMatriceCarre(M1, M2,M, n);
    printf("\nM1*M2\n");
    AfficherTableau(M, n);

    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Permet de faire la somme de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 + M2
------------------------------------------------------
*/
void sommeMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            /*M[i][j] = M1[i][j] + M2[i][j]*/
            *((*M + i) + j) = *((*M1 + i) + j) + *((*M2 + i) + j);
        }
    }
}
/*
-----------------------------------------------------
ROLE : Permet de faire la difference de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 - M2
------------------------------------------------------
*/
void differenceMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            /*M[i][j] = M1[i][j] - M2[i][j]*/
            *((*M + i) + j) = *((*M1 + i) + j) - *((*M2 + i) + j);
        }
    }
}
/*
-----------------------------------------------------
ROLE : Permet de faire le produit de deux matrice
------------------------------------------------------
PRECONDITION : M1 & M2 sont deux matrice de meme taille, n est un entier
------------------------------------------------------
POSTCONDITION : S CONTIENT M1 * M2
------------------------------------------------------
*/
void produitMatriceCarre(int M1[MAX][MAX], int M2[MAX][MAX],int M[MAX][MAX], int n)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *((*M + i) + j) = 0;
            for (k = 0; k < n; k++)
            {
            *((*M + i) + j) +=  *((*M1 + i) +k) + *((*M2 + k) + j);
            }

        }
    }
}
/*
-----------------------------------------------------
ROLE : Initialiser une matrice carre
------------------------------------------------------
PRECONDITION : M est une matrice carre, n est
la dimension (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de M sont initialisees
------------------------------------------------------
*/
void InitialiserTableau(int M[MAX][MAX], int n)
{
    int i, j, upper = 100, lower = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            /*on genere un nombre entier entre [lower-upper] = [0-100]*/
            *((*M + i) + j) = (rand() % (upper - lower + 1)) + lower;
        }
    }
}

/*
-----------------------------------------------------
ROLE : Afficher une matrice
------------------------------------------------------
PRECONDITION : Aucune
------------------------------------------------------
POSTCONDITION : Le contenu de M est afficher sur le
Terminal
------------------------------------------------------
*/
void AfficherTableau(int M[MAX][MAX], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d | ", *((*M + i) + j));
        }
        printf("\n");
    }
}