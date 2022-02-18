
#include <stdio.h>

/*PROTOTYPES PROCEDURES ET FONCTIONS*/
void viderBuffer(void);
float operation(float nb1, float nb2, char operateur);

int main(int argc, char *argv[])
{
    float nb_t1, nb_t2;
    char op;

    printf("\nEntrer Le premier reel : ");
    scanf("%f", &nb_t1);

    printf("\nEntrer Le deuxieme reel : ");
    scanf("%f", &nb_t2);
    viderBuffer();
    printf("\nOperation (+,-,*,/) ? : ");
    scanf("%c", &op);

    if (op == '/' && nb_t2 == 0)
    {
        printf("\nOperation impossible (Division par 0)\n");
    }else{
        printf("\n %.2f %c %.2f = %.2f\n", nb_t1,op, nb_t2, operation(nb_t1,nb_t2, op));
    }

    return 0;
}

void viderBuffer(void){
	char c;
	while ((c=getchar()) != '\n' && c!=EOF);
}

/*

*/
float operation(float nb1, float nb2, char operateur)
{
    float resultat=0;

    switch (operateur)
    {
    case '+':
        resultat = nb1 + nb2;
        break;
    case '-':
        resultat = nb1 - nb2;
        break;
    case '*':
        resultat = nb1 * nb2;
        break;
    case '/':
        resultat = nb1 / nb2;
        break;
    default:
        resultat = nb1 + nb2;
        break;
    }
    return resultat;
}