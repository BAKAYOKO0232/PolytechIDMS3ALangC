#ifndef IOFRACTION_H
#define IOFRACTION_H
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
t_fraction saisieFraction(void);
/*
-----------------------------------------------------
ROLE : permet d’afficher à l’écran une fraction 
------------------------------------------------------
PRECONDITION : f est une faction
------------------------------------------------------
POSTCONDITION : affiche sur le terminal a/b
------------------------------------------------------
*/
void afficheFraction(t_fraction f);
#endif