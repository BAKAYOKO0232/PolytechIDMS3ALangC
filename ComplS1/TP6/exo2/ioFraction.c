/*----------------------------------------------------
  NOM & PRENOM : BAKAYOKO CHEICK SEKO / CLASSE : GMM-3A
  EXERCICE n2 TP 6 : FRACTION
  COMPLEMENT DE LANGAGE C
----------------------------------------------------*/
#include "fraction.h"
/*
-----------------------------------------------------
ROLE : permet de saisir une fraction,
------------------------------------------------------
PRECONDITION : None
------------------------------------------------------
POSTCONDITION : f est une fraction : a/b avec (b !=0)
------------------------------------------------------
*/
t_fraction saisieFraction(void)
{
    t_fraction f;
    do
    {
    printf("\nDenominateur : ");
    scanf("%d", &f.denominateur);
    } while (f.denominateur != 0);
    
    printf("\nNumerateur : ");
    scanf("%d", &f.numerateur);

    return f;
}
/*
-----------------------------------------------------
ROLE : permet d’afficher à l’écran une fraction 
------------------------------------------------------
PRECONDITION : f est une faction
------------------------------------------------------
POSTCONDITION : affiche sur le terminal a/b
------------------------------------------------------
*/
void afficheFraction(t_fraction f)
{
    printf("f = %d/%d\n",f.numerateur,f.denominateur);
}