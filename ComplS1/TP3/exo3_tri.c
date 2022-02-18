/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n3 TP
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 20

typedef struct
{
    char nom[50];
    int nbrHabitant;
    int codePostal;
} t_commune;

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Afficher un Tableau
------------------------------------------------------
PRECONDITION : Aucune
------------------------------------------------------
POSTCONDITION : Le contenu de Tab est afficher sur le
Terminal
------------------------------------------------------
*/
void AfficherDepartement(t_commune Depart[], int n);
/*
-----------------------------------------------------
ROLE : Trier(tri par insertion) un Tableau de commune
dans l'ordre decroissant
------------------------------------------------------
PRECONDITION : Tab est un tableau de commune, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant(selon le nombre d'habitants)
------------------------------------------------------
*/
void trierCommune(t_commune Depart[], int n);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int i, n; /*nombre de communes*/
    t_commune Departement[MAX];

    do
    {
        printf("\nEntrer Le nombre de Communes svp : ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

    for (i = 0; i < n; i++)
    {
        printf("\nNom commune (%d) : ", i + 1);
        scanf("%s", Departement[i].nom);
        printf("\nNombres Habitants commune (%d) : ", i + 1);
        scanf("%d", &Departement[i].nbrHabitant);
        printf("\nCode Postal commune (%d) : ", i + 1);
        scanf("%d", &Departement[i].codePostal);
    }

    /*Affichage*/
    AfficherDepartement(Departement, n);
    /*Application du Tri*/
    trierCommune(Departement, n);
    /*Affichage*/
    AfficherDepartement(Departement, n);

    return 0;
}

/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Afficher un Tableau
------------------------------------------------------
PRECONDITION : Aucune
------------------------------------------------------
POSTCONDITION : Le contenu de Tab est afficher sur le
Terminal
------------------------------------------------------
*/
void AfficherDepartement(t_commune Depart[], int n)
{
    int i;

    printf("\n--------------------------------");
    for (i = 0; i < n; i++)
    {
        printf("\nNom commune (%d) : %s ", i + 1, Depart[i].nom);
        printf("\nNombres Habitants commune (%d) : %d ", i + 1, Depart[i].nbrHabitant);
        printf("\nCode Postal commune (%d) : %d \n", i + 1, Depart[i].codePostal);
    }
        printf("\n--------------------------------");
}
/*
-----------------------------------------------------
ROLE : Trier(tri par insertion) un Tableau de commune
dans l'ordre decroissant
------------------------------------------------------
PRECONDITION : Tab est un tableau de commune, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
ordre croissant(selon le nombre d'habitants)
------------------------------------------------------
*/
void trierCommune(t_commune Depart[], int n)
{
    int i, j;
    t_commune tmp;
    /*on demarre a partir du 2eme elt*/
    for (i = 1; i < n; i++)
    {
        tmp = Depart[i]; /*elt a trie*/
        /*insertion dans la partie trie*/
        j = i;
        while ((j > 0) && (Depart[j - 1].nbrHabitant > tmp.nbrHabitant))
        {
            /*decalage d'un cran sur la gauche*/
            Depart[j] = Depart[j - 1];
            j = j - 1;
        }
        Depart[j] = tmp;
    }
}