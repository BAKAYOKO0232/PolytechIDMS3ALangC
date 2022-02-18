#include <stdio.h>
#include <stdlib.h>

/*DEFINITION TYPES*/
typedef struct {
int x;
int y;
} t_point;

typedef struct {
t_point A;
t_point B;
t_point C;
t_point D;
} t_quadrilatere;

/* PROTOTYPES FONCTIONS & PROCEDURES*/
t_point saisiePoint(void);
void printInfosPoint(t_point point);
t_quadrilatere saisieQuadrilatere(void);
void printInfosQuadrilatere(t_quadrilatere quadrilatere);

/*PROGRAMME PRINCIPAL*/
int main(int argc, char* argv[])
{
    t_quadrilatere quadri;

    quadri = saisieQuadrilatere();
    printInfosQuadrilatere(quadri);

    return EXIT_SUCCESS;
}

/*DEFINITION FONCTIONS & PROCEDURES*/
t_point saisiePoint(void)
{
    t_point point;
    printf("\n x = ");
    scanf("%d", &point.x);
    printf("\n y = ");
    scanf("%d", &point.y);
    
    return point;
}


t_quadrilatere saisieQuadrilatere(void)
{
    t_quadrilatere quadrilatere;

    printf("\nSaisie infos Quadrilatere\n");
    printf("\nCoordonnees Point A\n");
    quadrilatere.A = saisiePoint();
    printf("\nCoordonnees Point B\n");
    quadrilatere.B = saisiePoint();
    printf("\nCoordonnees Point C\n");
    quadrilatere.C = saisiePoint();
    printf("\nCoordonnees Point D\n");
    quadrilatere.D = saisiePoint();

    return quadrilatere;
}

void printInfosQuadrilatere(t_quadrilatere quadrilatere)
{
    float longueur, largeur, perimetre, aire;

    longueur = sqrt(pow(quadrilatere.A.x-quadrilatere.B.x, 2) +
     pow(quadrilatere.A.y-quadrilatere.B.y, 2));
    
    largeur = sqrt(pow(quadrilatere.A.x-quadrilatere.C.x, 2) +
     pow(quadrilatere.A.y-quadrilatere.C.y, 2));

    perimetre = (longueur+largeur)*2;
    aire = longueur*largeur;

    printf("\nAffichage Informations Quadrilatere\n");
    printf("\nLongueur : %.2f\n", longueur);
    printf("\nLargeur : %.2f\n", largeur);
    printf("\nPerimetre : %.2f\n", perimetre);
    printf("\nAire : %.2f\n", aire);
    
}