
#include <stdio.h>
#include <string.h>


int nbVoyelles(char ch[], int length);
int isVoy(char);
void tableASCII(void);

int main(int argc, char argv[])
{
    char chaine[40];
    int t_ch = 0;
    
    printf("\nEntrer une chaine : ");
    scanf("%s", chaine);
    t_ch = strlen(chaine);
    if (t_ch > 0)
    {
        printf("Nombres de voyelles dans la chaine : %d.\n", nbVoyelles(chaine, t_ch));
    }
    tableASCII();
    return 0;
}

int isVoy(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
       return 1;
    return 0;
}

int nbVoyelles(char ch[], int length)
{
    int i=0, j=0, n = 0, ok = 0;
    /*char voy[] = {'a','e', 'u', 'i', 'o', 'y'};
    char voy[] ="aeyuio";*/
    for (i = 0; i < length; i++)
    {
        j=0;
        ok = 0;
        do{
            if (isVoy(ch[i]) == 1)
            {
                ok = 1;
                n =n+1;
            }
                j++;
        } while ( (ok != 1 ) && (j<6));
    }
    return n;
}


void tableASCII(void)
{
    int i=0;
    printf("\nTable ASCII des elts de code compris entre 40 & 86");
    for(i=40; i<87; i++)
    {
        printf("\n %d : %c", i,i);
    }
}