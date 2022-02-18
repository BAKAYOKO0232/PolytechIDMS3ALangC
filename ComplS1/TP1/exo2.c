/*
BAKAYOKO CHEICK SEKO - GMM 3A
EXERCICE 2 TP1 
COMPLEMENTS DE C - SEMESTRE 2
*/
#include <stdio.h>

/*DEFINITION CONSTANTES*/


/* DEFINITION TYPE */
typedef struct exo2
{
    int heure;
    int minute;
} t_heure;

/* PROTOTYPES FONCTIONS & PROCEDURES */
/*
ROLE : 
-------------------------------------------
PRECONDITION : 
------------------------------------------
POSTCONDTION : 
*/
t_heure formatHeure(t_heure *hr);
t_heure saisieHeure(void);
void afficherHeure(t_heure hr);
t_heure additionHeure(t_heure hr, t_heure hr1);

/* PROGRAMME PRINCIPAL*/
int main (int argc, char* argv)
{
    t_heure heure1, heure2;
    heure1 = saisieHeure();
    heure2 = saisieHeure();

    afficherHeure(heure1);
    afficherHeure(heure2);
    printf("\nAddition des deux heures");
    afficherHeure(additionHeure(heure1, heure2));
    return 0;
}

/* DEFINITION DES FONCTIONS & PROCEDURES*/

t_heure formatHeure(t_heure *hr)
{
    hr->heure = hr->heure + hr->minute/60;
    hr->minute = hr->minute%60;
}
t_heure saisieHeure(void)
{
    t_heure hr;

    printf("\nHeure? : ");
    scanf("%d", &hr.heure);
    printf("\nMinutes? : ");
    scanf("%d", &hr.minute);
    return hr;
}
void afficherHeure(t_heure hr)
{
    formatHeure(&hr);
    printf("\n%dh %dmin\n", hr.heure, hr.minute);
}
t_heure additionHeure(t_heure hr, t_heure hr1)
{
    t_heure hr_r;
    hr_r.heure = hr.heure + hr1.heure;
    hr_r.minute = hr.minute + hr1.minute;
    formatHeure(&hr_r);
    return hr_r;
}
