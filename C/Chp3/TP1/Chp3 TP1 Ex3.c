#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

float mini(float *tab)

{
    float valuemini = 100000;
    int i;

    for (i = 0; i < 8; i++)
    {
        if (tab[i] < valuemini)
        {
            valuemini = tab[i];
        }
    }

    return valuemini;
}

float maxi(float *tab)
{
    float valuemax = -100000;
    int i;

    for (i = 0; i < 8; i++)
    {
        if (tab[i] > valuemax)
        {
            valuemax = tab[i];
        }
    }
    return valuemax;
}
//int i,valuemini,valuemaxi;
void main()

{
    float i[8] = {1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6};
    float minivalue, maxivalue;

    minivalue = mini(i);
    maxivalue = maxi(i);

    printf("La valeur la plus basse est : %f\n", minivalue);
    printf("La valeur la plus haute est : %f\n", maxivalue);
    getch();
}
