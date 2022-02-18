/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n4 TP
  COMPLEMENT DE LANGAGE C : Stat Fichier
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 100
enum bool
{
    FALSE,
    TRUE
}; /*definitions types booleen*/
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
void viderbuffer(){char c;while ((c = getchar()) != '\n' && c != EOF);}
/*
-----------------------------------------------------
ROLE : cette fonction permet de savoir si un caractère
passé en paramètre est separateur
------------------------------------------------------
PRECONDITION : c est caractere
------------------------------------------------------
POSTCONDITION : si c est un séparateur on retourne TRUE
sinon FALSE
------------------------------------------------------
*/
enum bool separateur(char c);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    /*Declarations Variables fichier*/
    char nomFichier[MAX];
    FILE *fichier;
    /*Variables de Statistiques sur le fichier*/
    int nbMots = 0, nbCars = 0, nbLignes = 0;
    /*Nombres occurences de chaques caracteres minuscules*/
    int nbMinuscules[26]={0};
    /*Variables de Lectures*/
    char c;
    int i; /*indice de boucle*/

    /*Lecture nom fichier*/
    printf("\nNom Fichier : ");
    scanf("%s", nomFichier);
    /*On ouvre le fichier*/
    if ((fichier = fopen(nomFichier, "r")) != NULL)
    {
        /*on lit caracteres par caracteres et on traite*/
        while ((c = fgetc(fichier)) != EOF)
        {
            /*si le caractere est differents du saut de ligne*/
            if (c != '\n')
            {
                /*on incremente le nombre de caractere*/
                nbCars = nbCars + 1;
                /*si le caractere est un separateur on incremente le nombre de mots*/
                if (separateur(c) == TRUE)
                {
                    nbMots = nbMots + 1;
                }
                else if(c >= 'a' && c<='z')
                { /*sinon on verfie s'il est une lettre minuscule*/
                    /*On augmente le nombre d'occurence du caracteres correspondant*/
                    /*Code Assci : a(97) z(122)*/
                    nbMinuscules[c-'a'] = nbMinuscules[c-'a']+1;
                }
            }else{ /*sinon on augmente le nombre de ligne*/
                nbMots = nbMots +1;
            }
        }

        /*Affichage des informations*/
        printf("\nNombres de caracteres : %d", nbCars);
        printf("\nNombres de lignes : %d", nbLignes);
        printf("\nNombres de mots : %d", nbMots);
        /*Nombres d'occurence de minuscules*/
        for(i=0; i<26; i++)
        {
            printf("\nNombres de %c : %d\n", ('a'+i), nbMinuscules[i]);
        }
        /*Fermeture fichier*/
        fclose(fichier);
    }
    else
    { /*si l'ouverture du fichier echoue alors on ferme le prog*/
        exit(EXIT_FAILURE);
    }
    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : cette fonction permet de savoir si un caractère
passé en paramètre est separateur
------------------------------------------------------
PRECONDITION : c est caractere
------------------------------------------------------
POSTCONDITION : si c est un séparateur on retourne TRUE
sinon FALSE
------------------------------------------------------
*/
enum bool separateur(char c)
{
    if (c == '\n' || c == ' ' || c == ':' || c == '.' || c == ',' || c == ';' || c == '!' || c == '(' || c == ')' || c == '"' || c == '"')
        return TRUE;

    return FALSE;
}
