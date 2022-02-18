/*----------------------------------------------------*/
/*  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
    EXERCICE n5 TP2
    COMPLEMENT DE LANGAGE C
*/
/*----------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
enum bool { FAUX, VRAI}; /* Definition Type booleen*/

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Recherche par dichotomie un élément dans un 
tableau d'entiers.
------------------------------------------------------
PRECONDITION :  Le tableau est suppose trié en ordre croissant.
------------------------------------------------------
POSTCONDITION : renvoie l'indice de l'élément s'il existe, -1 sinon.
------------------------------------------------------
*/
int rechercheDichotomieIte(int Tab[], int n, int x);
/*
-----------------------------------------------------
ROLE : Recherche par dichotomie un élément dans un 
tableau d'entiers avec la recursivite.
------------------------------------------------------
PRECONDITION :  Le tableau est suppose trié en ordre croissant.
------------------------------------------------------
POSTCONDITION : renvoie l'indice de l'élément s'il existe, -1 sinon.
------------------------------------------------------
*/
int rechercheDichotomieRecu(int Tab[], int debut, int fin, int x);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    /*Test des 2 fonctions*/

    return 0;
}


/*
-----------------------------------------------------
ROLE : Recherche par dichotomie un élément dans un 
tableau d'entiers.
------------------------------------------------------
PRECONDITION :  Le tableau est suppose trié en ordre croissant.
------------------------------------------------------
POSTCONDITION : renvoie l'indice de l'élément s'il existe, -1 sinon.
------------------------------------------------------
*/
int rechercheDichotomieIte(int Tab[], int n, int x)
{
    /*declarations & initialisations*/
    enum bool trouve = FAUX;
    /*deb : debut | fin : fin | position : 0*/
    int deb=1, fin=n, position=-1, milieu=0;

    while (trouve != VRAI && deb <= fin)
    {
        /*on calcule le milieu du tableau*/
        milieu = (deb+fin)/2;
        /**/
        if (Tab[milieu] == x) /*si on a trouve l'element*/
        {
            trouve = VRAI;
            position = milieu;
        }else{ /*on recherche dans la bonne sous partie du tableau*/
            if (x > Tab[milieu])
            {
                deb = milieu+1;
            }else{
                fin = milieu+1;
            }
        }
    }
    /**/
    if (trouve == VRAI)
        return position;
    return -1;
}

/*
-----------------------------------------------------
ROLE : Recherche par dichotomie un élément dans un 
tableau d'entiers avec la recursivite.
------------------------------------------------------
PRECONDITION :  Le tableau est suppose trié en ordre croissant.
------------------------------------------------------
POSTCONDITION : renvoie l'indice de l'élément s'il existe, -1 sinon.
------------------------------------------------------
*/
int rechercheDichotomieRecu(int Tab[], int debut, int fin, int x)
{
    /*Declarations & Initialisation*/
    int position, milieu;
    /*Traitement*/
    /*si le debut > fin ==> elt non present dans le tableau*/
    if (debut > fin) 
    {
        position = -1;
    }else{
        milieu = (debut + fin)/2;
        if (Tab[milieu] == x) /*on a trouve l'elelment*/
        position = milieu;
        else{ /*si on l'a pas trouve alors*/
            if (Tab[milieu] > x) /*on recherche dans la sous partie gauche (tab/milieu)*/
            {
                rechercheDichotomieRecu(Tab, debut, milieu-1, x);
            }else{ /*on recherche dans la sous partie droite (tab/milieu)*/
                rechercheDichotomieRecu(Tab, milieu+1, fin, x);
            }
        }
    }
    return position;
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



