/*----------------------------------------------------*/
/*  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
    EXERCICE n2 TP (RECURSIVITE)
    COMPLEMENT DE LANGAGE C
*/
/*----------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : calcule les suites de Fibonacci
U0 = 0 || U1 = 1 || Un = Un-2 + Un-1 pour n >= 2
------------------------------------------------------
PRECONDITION : n est un entier >= a 2
------------------------------------------------------
POSTCONDITION : U0 = 0 si n=0
|| U1 = 1 si n = 1 || Un = Un-2 + Un-1 pour n >= 2
------------------------------------------------------
*/
int fibonacci(int n);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int n;

    do
    {
        printf("\nEntrer n : ");
        scanf("%d", &n);
    } while (n < 0);

    printf("\nFibonacci(%d) = %d", n, fibonacci(n));

    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : calcule les suites de Fibonacci
U0 = 0 || U1 = 1 || Un = Un-2 + Un-1 pour n >= 2
------------------------------------------------------
PRECONDITION : n est un entier > 0
------------------------------------------------------
POSTCONDITION : U0 = 0 si n=0
|| U1 = 1 si n = 1 || Un = Un-2 + Un-1 pour n >= 2
------------------------------------------------------
*/
int fibonacci(int n)
{
    int resultat = 0;

    if (n == 0)
    {
        resultat = 0;
    }
    else if (n == 1)
    {
        resultat = 1;
    }
    else
    {
        resultat = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return resultat;
}
/*
-----------------------------------------------------
ROLE :
------------------------------------------------------
PRECONDITION :
------------------------------------------------------
POSTCONDITION :
------------------------------------------------------
*/