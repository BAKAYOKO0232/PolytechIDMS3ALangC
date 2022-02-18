#ifndef CALCULFRACTION_H
#define CALCULFRACTION_H
/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP 6 : FRACTION
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include "fraction.h"

/*----------------------------------------------------*/
/*          DEFINITIONS TYPES ET CONSTANTES         */
/*----------------------------------------------------*/

/*----------------------------------------------------*/
/*          PROTOTYPES PROCEDURES & FONCTIONS         */
/*----------------------------------------------------*/
/*
-----------------------------------------------------
ROLE : permet de retourner la somme des deux fractions qui lui
sont passées en paramètre
------------------------------------------------------
PRECONDITION : f1 et f2 sont des variables de types t_fraction
------------------------------------------------------
POSTCONDITION : f.numerateur = f1.numerateur*f2.denominateur+
f2.numerateur*f1.denominateur
f.denominateur = f1.denominateur*f2.denominateur
------------------------------------------------------
*/
t_fraction addFractions(t_fraction f1, t_fraction f2);
/*
-----------------------------------------------------
ROLE :  qui permet de retourner le produit des deux fractions qui lui
sont passées en paramètre et
------------------------------------------------------
PRECONDITION : f1 et f2 sont des variables de types t_fraction
------------------------------------------------------
POSTCONDITION : f.numerateur = f1.numerateur *f2.numerateur
f.denominateur = f1.denominateur*f2.denominateur
------------------------------------------------------
*/
t_fraction multFractions(t_fraction f1, t_fraction f2);

/*
-----------------------------------------------------
ROLE :  renvoie « vrai » si les deux fractions qui lui sont passées en
paramètre sont égales, faux sinon.
------------------------------------------------------
PRECONDITION : f1 et f2 sont des variables de types t_fraction
------------------------------------------------------
POSTCONDITION : TRUE si (f1.numerateur==f2.numerateur &&
f1.denominateur==f2.denominateur) FAUX sinon
------------------------------------------------------
*/
enum booleen egalFractions(t_fraction f1, t_fraction f2);
#endif