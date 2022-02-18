#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 100

void nbMention(int T[], int n, int *MABien, int *MBien);

/*Programme principal*/
int main(int argc, char *argv[])
{
    int T[MAX];
    int i, n, nMax = 16, nMin = 12, MentionABien=0,MentionBien=0;
    /*Use current time as
    seed for random generator
    srand(time(0));
        srand(time(NULL));*/
    srand(time(0));
    
    printf("\nNombre de notes ? : ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n <= MAX)
        {
        }
        else if (n > MAX)
        {
            n = MAX;
        }

        /*initialisation des notes avec un random*/

        for (i = 0; i < n; i++)
        {
            T[i] = rand()%((nMax+1)-nMin) + nMin; ;
             
        }
        nbMention(T, n, &MentionABien, &MentionBien);
        printf("\nNombres de Notes : %d", n);
        printf("\nNombres de Mention Abien : %d", MentionABien);
        printf("\nNombres de Mention Bien : %d", MentionBien);
    }else{
        printf("\nNombres de Notes negatives\n");
    }

    return EXIT_SUCCESS;
}

void nbMention(int T[], int n, int *MABien, int *MBien)
{
    int i = 0;
    *MABien = 0;
    *MBien = 0;

    for (i = 0; i < n; i++)
    {
        if (T[i] >= 12 && T[i] < 14)
        {
            *MABien = *MABien + 1;
        }
        else if (T[i] >= 14 && T[i] < 16)
        {
            *MBien = *MBien + 1;
        }
    }
}