/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n1 TP5
  COMPLEMENT DE LANGAGE C : Fichier
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
void viderbuffer(){char c; while ((c=getchar()) != '\n' && c!=EOF);}
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
    char nom_fichier[] = "Entiers.txt";
    int a;
    FILE *fichier = NULL;

    if ( (fichier = fopen(nom_fichier, "r")) != NULL )
    {
        while ( fscanf(fichier,"%d",&a) != EOF )
        {
            printf("\n %d", a);
        }
        
        fclose(fichier);
    }else{
        exit(EXIT_FAILURE);
    }
    return 0;
}

