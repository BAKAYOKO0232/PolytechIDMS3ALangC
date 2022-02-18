/*----------------------------------------------------*/
/*  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
    EXERCICE n1 TP2
    COMPLEMENT DE LANGAGE C
*/
/*----------------------------------------------------*/
#include <stdio.h>



/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    char opt;
    /*on verifie le nombre de parametre*/
    if (argc > 1)
    {
        /*si nous avons exactement deux parametres alors*/
        if (argc == 2)
        {
            printf("\nBonjour %s\n", argv[1]);
        }
        else if (argc == 3) /*si nous avons exactement 3 arguments*/
        {
            switch (argv[1][0]) /*selon la valeur nous affichons un msg*/
            {
            case '1':
                printf("\nBonjour Monsieur %s\n", argv[2]);
                break;
            case '2':
                printf("\nBonjour Madame %s\n", argv[2]);
                break;
            case '3':
                printf("\nBonjour Mademoiselle %s\n", argv[2]);
                break;
            default: /*si le formatage n'est pas respecte on affiche une erreur*/
                printf("\nErreur\n");
                break;
            }
        }
    }
    else /*si le nombe de parametres est insuffisant*/
    {
        printf("\nTraitement impossible, pas assez de paramètre.\n");
    }
    return 0;
}
