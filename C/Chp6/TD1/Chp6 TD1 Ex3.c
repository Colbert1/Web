#include <stdio.h>
#include <tchar.h>

typedef struct
{
	float X, Y;
} point;
void saisie(point *pt, int nb)

{
	int i;
	char lettre = 'A';
	for (i = 0; i < nb; i++)
	{
		printf("X=");
		scanf("%f", &pt[i].X);
		printf("Y=");
		scanf("%f", &pt[i].Y);
	}
}
void affiche(point *pt, int nb)
{
	int i;
	char lettre = 'A';
	for (i = 0; i < nb; i++)
	{
		printf("%c: X= %.2f \n", lettre, pt[i].X);
		printf("%c: Y= %.2f \n", lettre, pt[i].Y);
		lettre = lettre + 1;
	}
}
void main()
{

	int i;
	point pt[15];
	saisie(pt, 15);
	affiche(pt, 15);

	getch();
	return 0;
}
