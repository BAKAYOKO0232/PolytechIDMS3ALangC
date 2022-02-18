/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP
  COMPLEMENT DE LANGAGE C :Nbr Caracteres fichiers
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
ROLE : Cette fonction qui renvoie le nombre de caractères
d’un fichier.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoi le nombre de caractere d'un fichier
------------------------------------------------------
*/
int compte_caractere(FILE *f);
/*
-----------------------------------------------------
ROLE : Cette fonction qui renvoie le nombre de mots d’un fichier.
les mots sont séparés par des espaces ou des retours à la ligne.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoie le nombre de mots d’un fichier
------------------------------------------------------
*/
int compte_mot(FILE *f);
/*
-----------------------------------------------------
ROLE : Cette fonction qui renvoie le nombre de lignes d’un
fichier.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoie le nombre de lignes d’un
fichier
------------------------------------------------------
*/
int compte_ligne(FILE *f);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int nb;
    FILE *fichier = NULL;
    if (argc != 3)
    {
        printf("Usage: ./program nomfichier option(m,c,l)\n");
        exit(EXIT_FAILURE);
    }
    else
    {

        if ((fichier = fopen(argv[1], "r")) != NULL)
        {
            switch (argv[2][0])
            {
            case 'm':
                nb = compte_mot(fichier);
                printf("\nNombre de mots dans %s : %d \n", argv[1], nb);
                break;
            case 'c':
                nb = compte_caractere(fichier);
                printf("\nNombre de caracteres dans %s : %d \n", argv[1], nb);
                break;
            case 'l':
                nb = compte_ligne(fichier);
                printf("\nNombre de ligne dans %s : %d \n", argv[1], nb);
                break;
            default:
                printf("\nErreur options invalides.\n");
                break;
            }
            fclose(fichier);
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

/*
-----------------------------------------------------
ROLE : Cette fonction qui renvoie le nombre de caractères
d’un fichier.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoi le nombre de caractere d'un fichier
------------------------------------------------------
*/
int compte_caractere(FILE *f)
{
    /*Nombres de caracteres*/
    int nbCaracteres = 0;
    /*on lit tout le fichier*/
    while (fgetc(f) != EOF)
    {
        /*a chaque caractere on incrmente
        le nombre*/
        nbCaracteres = nbCaracteres + 1;
    }

    return nbCaracteres;
}

/*
-----------------------------------------------------
ROLE : Cette fonction qui renvoie le nombre de mots d’un fichier.
les mots sont séparés par des espaces ou des retours à la ligne.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoie le nombre de mots d’un fichier
------------------------------------------------------
*/
int compte_mot(FILE *f)
{
    /*Nombres de mots*/
    int nbMots = 0;
    char c;
    /*on lit tout le fichier*/
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\0' || c == '\n')
            /*a chaque caractere on incrmente
            le nombre*/
            nbMots = nbMots + 1;
    }
    return nbMots;
}

/*
-----------------------------------------------------
ROLE : Cette fonction qui renvoie le nombre de lignes d’un
fichier.
------------------------------------------------------
PRECONDITION : f est un pointeur sur un fichier (existant)
------------------------------------------------------
POSTCONDITION : renvoie le nombre de lignes d’un
fichier
------------------------------------------------------
*/
int compte_ligne(FILE *f)
{
    /*Nombres de lignes*/
    int nbLignes = 0;
    char c;
    /*on lit tout le fichier*/
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
            /*a chaque ligne on incrmente
            le nombre de ligne*/
            nbLignes = nbLignes + 1;
    }
    return nbLignes;
}
