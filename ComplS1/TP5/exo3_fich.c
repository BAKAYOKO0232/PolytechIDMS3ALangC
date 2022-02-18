/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n3 TP
  COMPLEMENT DE LANGAGE C : Programme de Traduction
  Francais ==> Javanais
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
enum bool
{
    FALSE,
    TRUE
}; /*Definitions du types booleen*/

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
ROLE : Cette fonction permet de verifier si un caractere
est une voyelle
------------------------------------------------------
PRECONDITION : c est un caractere
------------------------------------------------------
POSTCONDITION : renvoi TRUE si le caractere est une
voyelle FALSE sinon
------------------------------------------------------
*/
enum bool isVoy(char c);


/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    FILE *fichier1, *fichier2;
    char c1, c2;
    /*si le nombre d'argument est != 3
    alors on genere une erreur*/
    if (argc != 3)
    {
        printf("Usage: ./program nomfichierFr nomfichierJv\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        /*sinon on procedera au traitement
        on ouvre les deux fichiers*/
        if (fichier1 = fopen(argv[1], "r") != NULL)
        {
            fichier2 = fopen(argv[2], "w");
            /*on lit deux caractere*/
            c1 = fgetc(fichier1);
            c2 = fgetc(fichier1);
            /*si les deux caracteres sont differents du fin de fichiers*/
            while ( c1 != EOF && c2 != EOF)
            {
                /*on verifie si le premier est une consonne et la deuxieme
                une voyelle alors on les ecrit en mettant un AV entre eux*/
               if (isVoy(c1) == FALSE && isVoy(c2)==TRUE)
               {
                   fputc(c1,fichier2);
                   fputc('A',fichier2);
                   fputc('V',fichier2);
                   fputc(c2,fichier2);
               }
               /*on fais un decalage*/
               c1 = c2;
               /*on lit le caracteres suivant et on reprend la procedure
               selon oui ou non l'invariant*/
               c2 = fgetc(fichier2); 
            }
            /*Fermetture des fichiers*/
            fclose(fichier1);
            fclose(fichier2);
        }
        else
        {
            /*si on ne reussi pas a ouvrir le fichier alors on quitte*/
            printf("\nErreur fichier en francais inexistant\n");
            exit(EXIT_FAILURE);
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
ROLE : Cette fonction permet de verifier si un caractere
est une voyelle
------------------------------------------------------
PRECONDITION : c est un caractere
------------------------------------------------------
POSTCONDITION : renvoi TRUE si le caractere est une
voyelle FALSE sinon
------------------------------------------------------
*/
enum bool isVoy(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        return TRUE;

    return FALSE;
}
