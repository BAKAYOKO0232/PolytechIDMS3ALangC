#ifndef FRACTION_H
#define FRACTION_H
/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP 6 : FRACTION
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/
/*Definition Type booleen*/
enum booleen {FALSE, TRUE};
/*Definition Type fraction*/
typedef struct
{
    int numerateur;
    int denominateur;
} t_fraction;

#endif