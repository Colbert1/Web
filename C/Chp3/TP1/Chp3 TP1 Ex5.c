#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int fonction(int n)
{
    int i;
    int valeur = 1;

    if (n == 0)
        return 1;
    else
        for (i = 1; i <= n; i++)
            valeur = valeur * i;

    return valeur;
};

int main()
{
    int n, reponse;

    printf("entrez n : ");
    scanf("%i", &n);

    reponse = fonction(n);

    printf("La fonction de %i est %i \n\n", n, reponse);
    getch();
    return 0;
}
