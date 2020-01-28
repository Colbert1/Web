#include <stdio.h>
#include <conio.h>
float moy (float val[], int nb)
	{
		int I;
		float sum=0;
		for ( i = 0; i < nb; i++)
			sum += val[i];
		return sum/nb;
	}
	int main (int argc, char**argv)
	{
		float tab [5];
		int i;
		for ( i = 0; i < 5; i++)
			Scanf (“%f”, &tab[i];
		printf(“La moyenne est %f\n”, moy(tab, 5));
		return 0 ;
	}

