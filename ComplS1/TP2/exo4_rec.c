/*----------------------------------------------------*/
/*  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
    EXERCICE n4 TP2
    COMPLEMENT DE LANGAGE C
*/
/*----------------------------------------------------*/
#include <stdio.h>
#include <ctype.h>
/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTQNTES         */
/*----------------------------------------------------*/
#define MAX 30 /*Taille max tableau*/
/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
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

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    /*Declarations des variables*/
    int n, x, i, ok=0;
    int T[MAX]; 

    /*Saisie des valeurs*/
    printf("\nEntrer le nombre d'elements : ");
    scanf("%d", &n);
    /*Traitement*/
    if (n > 0 && n <= MAX)
    {
        for (i = 0; i < n; i++)
        {
            /*On suppose que les valeurs saisie sont correctes*/
            printf("\nValeur %d [100-900] : ", (i + 1));
            scanf("%d", &T[i]);
        }
        /*recherche valeur*/
        printf("\nEntrer la valeur recherchees : ");
        scanf("%d", &x);
        /**/
        i=0; /*initialisation compteur*/
        do {
            if (T[i] == x)
                printf("\nL'element est present dans a la position %d\n", i);
                ok = 1;
            i++;
        }while ((ok==0) && i<n);
        
        if(ok == 0)
        {
            printf("\nL'element n'est pas present dans le tableau");
        }
    }

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
