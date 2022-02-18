/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n5 TP
  COMPLEMENT DE LANGAGE C : Gestion Etudiant
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
#define MAX 250

typedef struct 
{
    char nom[50];
    char prenom[50];
    int age;
    int poids;
    int taille;
    char categorie;
} t_etudiant;

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE :  fonction permet de vider le buffer 
------------------------------------------------------
PRECONDITION : definir un char c dans le main
------------------------------------------------------
POSTCONDITION : 
------------------------------------------------------
#define viderbuffer while ((c=getchar()) != '\n' && c!=EOF)
*/
void viderbuffer(){char c; while ((c=getchar()) != '\n' && c!=EOF);}
/*
-----------------------------------------------------
ROLE :  fonction utilisateur de comparaison fournie a qsort() 
------------------------------------------------------
PRECONDITION : 
------------------------------------------------------
POSTCONDITION : 
------------------------------------------------------
*/
static int myCompare(const void* a, const void* b);

/*
-----------------------------------------------------
ROLE : Echanger le contenu de deux variables
------------------------------------------------------
PRECONDITION : Les valeurs doivent etre bien definies et initialisees
------------------------------------------------------
POSTCONDITION : Le contenu des 2 sont echangees
------------------------------------------------------
*/
void echange(t_etudiant *a, t_etudiant *b);
/*
-----------------------------------------------------
ROLE : Permet de calculer le poids idéal d’un individu
en fonction de sa catégorie (F pour les étudiantes, H pour les étudiants)
------------------------------------------------------
PRECONDITION : la taille et la categorie sont bien definies
------------------------------------------------------
POSTCONDITION : si Categorie='F' ==> Poids_ideal = Taille - 100 - (Taille - 150)/2.
Categorie='H' ==>  : Poids_ideal = Taille - 100 - (Taille - 150)/4.
------------------------------------------------------
*/
float svelte(int taille, char Categorie);

/*
-----------------------------------------------------
ROLE : Regrouper les etudiants par categorie
------------------------------------------------------
PRECONDITION : Tab est un tableau d'etudiants, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
categorie
------------------------------------------------------
*/
void regrouperCategorie(t_etudiant T[], int n);
/*
-----------------------------------------------------
ROLE : Regrouper les etudiants par poids
------------------------------------------------------
PRECONDITION : Tab est un tableau d'etudiants, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
poids
------------------------------------------------------
*/
void triPoids(t_etudiant T[], int n, int debu, int fin);

/*----------------------------------------------------*/
/*                  PROGRAMME PRINCIPAL              */
/*----------------------------------------------------*/
int main(int argc, char *argv[])
{
    int i, n;
    char c;
    int nbEtuPoidSupHommes, nbEtuPoidSupFemmes;
    t_etudiant TabEtudiant[MAX];

    do{
    printf("\nEntrer le nombre d'etudiants : ");
    scanf("%d", &n);
    }while(n<=0 || n> MAX);

    printf("\n------------------------------");
    for(i=0; i<n; i++)
    {
        printf("\nNom : ");
        scanf("%s", TabEtudiant[i].nom);
        printf("\nPrenom : ");
        scanf("%s", TabEtudiant[i].prenom);
        printf("\nAge : ");
        scanf("%d", &TabEtudiant[i].age);
        printf("\nTaille : ");
        scanf("%d", &TabEtudiant[i].taille);
        printf("\nPoids : ");
        scanf("%d", &TabEtudiant[i].poids);
        viderbuffer();
        printf("\nCategorie : ");
        scanf("%c", &TabEtudiant[i].categorie);
    }
    printf("\n------------------------------");

    printf("\nAffichage Infos Etudiant");
    for(i=0; i<n; i++)
    {
        printf("\n----------------------------------");
        printf("\nNom : %s", TabEtudiant[i].nom);
        printf("\nPrenom : %s", TabEtudiant[i].prenom);
        printf("\nAge : %d", TabEtudiant[i].age);
        printf("\nTaille : %d", TabEtudiant[i].taille);
        printf("\nPoids : %d", TabEtudiant[i].poids);
        printf("\nCategorie : %c", TabEtudiant[i].categorie);
    }
    printf("\n------------------------------");

    /*le nombre d’étudiants par catégorie qui ont un poids supérieur au poids idéal*/
    nbEtuPoidSupHommes = 0;
    nbEtuPoidSupFemmes = 0;
    for(i=0; i<n; i++)
    {
        /*si le poids de l'etudiant i est > a son poids ideal*/
        if (TabEtudiant[i].poids > svelte(TabEtudiant[i].taille, TabEtudiant[i].categorie))
        {
            /*alors selon sa categorie (H/F) on incremente les stats*/
            if (TabEtudiant[i].categorie == 'H')
            {
                nbEtuPoidSupHommes = nbEtuPoidSupHommes + 1;
            }else if (TabEtudiant[i].categorie == 'F'){
                nbEtuPoidSupFemmes = nbEtuPoidSupFemmes +1;
            }
        }
    }
    /*on regroupe les etudiants par categories*/
    regrouperCategorie(TabEtudiant, n);
    printf("\nAffichage Infos Etudiant");
    for(i=0; i<n; i++)
    {
        printf("\n----------------------------------");
        printf("\nNom : %s", TabEtudiant[i].nom);
        printf("\nPrenom : %s", TabEtudiant[i].prenom);
        printf("\nAge : %d", TabEtudiant[i].age);
        printf("\nTaille : %d", TabEtudiant[i].taille);
        printf("\nPoids : %d", TabEtudiant[i].poids);
        printf("\nCategorie : %c", TabEtudiant[i].categorie);
    }
    printf("\n------------------------------");
    /*On affiche le poids max et mini par categorie*/

    return 0;
}


/*----------------------------------------------------*/
/*          DEFINITION PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : Permet de calculer le poids idéal d’un individu
en fonction de sa catégorie (F pour les étudiantes, H pour les étudiants)
------------------------------------------------------
PRECONDITION : la taille et la categorie sont bien definies
------------------------------------------------------
POSTCONDITION : si Categorie='F' ==> Poids_ideal = Taille - 100 - (Taille - 150)/2.
Categorie='H' ==>  : Poids_ideal = Taille - 100 - (Taille - 150)/4.
------------------------------------------------------
*/
float svelte(int taille, char Categorie)
{
    float poids_ideal;

    if (Categorie == 'F')
    {
        poids_ideal = taille-100 - (taille-150)/2;
    }else if(Categorie == 'H'){
        poids_ideal = taille-100 - (taille-150)/4;
    }
    return poids_ideal;
}

/*
-----------------------------------------------------
ROLE :  fonction utilisateur de comparaison fournie a qsort() 
------------------------------------------------------
PRECONDITION : 
------------------------------------------------------
POSTCONDITION : 
------------------------------------------------------
*/
static int myCompare(const void* a, const void* b)
{
    /* definir des pointeurs type's et initialise's
      avec les parametres */
    t_etudiant const *etu = a;t_etudiant const *etu1 = b;
    /*evaluer et retourner l'etat de l'evaluation (tri croissant) */
    return etu->categorie == etu1->categorie;
}

/*
-----------------------------------------------------
ROLE : Regrouper les etudiants par categorie
------------------------------------------------------
PRECONDITION : Tab est un tableau d'etudiants, n est
la taille du tableau (n>0 & n<= MAX)
------------------------------------------------------
POSTCONDITION : Les valeurs de Tab sont classer par
categorie
------------------------------------------------------
*/
void regrouperCategorie(t_etudiant T[], int n)
{
    /* calling qsort function to sort the array
     with the help of Comparator
    qsort (tab, sizeof tab / sizeof *tab, sizeof *tab, compare);
    qsort(T, sizeof T / sizeof *T, sizeof(const t_etudiant*), myCompare);*/
    qsort(T, n, sizeof(const t_etudiant*), myCompare);
}

/*
-----------------------------------------------------
ROLE : Echanger le contenu de deux variables
------------------------------------------------------
PRECONDITION : Les valeurs doivent etre bien definies et initialisees
------------------------------------------------------
POSTCONDITION : Le contenu des 2 sont echangees
------------------------------------------------------
*/
void echange(t_etudiant *a, t_etudiant *b)
{
    t_etudiant tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}