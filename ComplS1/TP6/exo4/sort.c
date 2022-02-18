/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n3 TP 6 ==> Tri
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include "./sortFramework.h"


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
    /*Application Tri Rapide*/
    TriInsertionCroissant(T, n);
    /*Application Tri par Selection*/
    TriSelection(T, n);
    /*Affichage*/
    AfficherTableau(T, n);

    return 0;
}