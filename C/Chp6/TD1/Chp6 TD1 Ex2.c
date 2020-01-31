#include <stdio.h>
#include <tchar.h>

typedef struct
{
	float X, Y;
} point;
void main()
{

	int i;
	point pt[15];
	char lettre = 'A';
	for (i = 0; i < 15; i++)
	{
		printf("X=");
		scanf("%f", &pt[i].X);
		printf("Y=");
		scanf("%f", &pt[i].Y);
	}
	for (i = 0; i < 15; i++)
	{
		printf("%c: X= %.2f \n", lettre, pt[i].X);
		printf("%c: Y= %.2f \n", lettre, pt[i].Y);
		lettre = lettre + 1;
	}
	getch();
	return 0;
}
