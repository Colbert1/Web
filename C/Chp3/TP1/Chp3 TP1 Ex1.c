#include <stdio.h>
#include <conio.h>
#include <math.h>

int puissance(int a, int b)
{
	int calcul;
	calcul = pow(a, b);

	return calcul;
}

int main(int argc, char *argv[])
{
	int x, y, a, b, calcul;
	printf("Quelle est la valeur de x ? \n");
	scanf("%d", &x);
	printf("Quelle est la valeur de y ? \n");
	scanf("%d", &y);

	calcul = puissance(x, y);

	printf("La valeur est egale a %d", calcul);

	getch();
	return 0;
}
