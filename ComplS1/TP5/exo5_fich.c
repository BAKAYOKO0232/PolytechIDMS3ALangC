/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n5 TP
  COMPLEMENT DE LANGAGE C : Traitement Entier
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/

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
    int i;
    int n = 0, nbPairs = 0, nbImpairs = 0;
    FILE *fichier1, *fichier2, *fichier3;

    fichier1 = fopen("MesEntiers.txt", "w");
    fichier2 = fopen("MesEntiersPairs.txt", "w");
    fichier2 = fopen("MesEntiersImpairs.txt", "w");
    do
    {
        printf("\nEntrer un entier?[0-1000] Tapez -1 pour quitter : ");
        scanf("%d", &i);
        if (i >= 0 && i <= 1000)
        {
            fprintf(fichier1, "%d\n", i);
            n = n + 1; /*On incremente le nombre d'entiers*/
            /*selon que le nombre soit pair ou non on augmente les
            occurence*/
            if (i % 2 == 0)
            {
                fprintf(fichier2, "%d\n", i);
                nbPairs = nbPairs + 1;
            }
            else
            {
                fprintf(fichier3, "%d\n", i);
                nbImpairs = nbImpairs + 1;
            }
        }
    } while (i != -1); /*On lis tant que le nombre est != -1*/
    /*On ferme les fichiers ouvert*/
    fclose(fichier1);
    fclose(fichier2);
    fclose(fichier3);
    /*Affichage des informations*/
    printf("\nNombres d'entiers traites : %d", n);
    printf("\nNombres d'entiers paires : %d", nbPairs);
    printf("\nNombres d'entiers impaires : %d\n", nbImpairs);
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
