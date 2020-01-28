#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <math.h>

int tab[10] = {1, 2, 4, 8, 16, 32, 64, 128, 258, 512};
int i;
void affiche(int *tab)
{
	for (i = 0; i < 10; i++)
	{
		printf("%d:%d \n", i, tab[i]);
	}
}

int main(int argc, char *argv[])
{
	int i;
	int tab[10] = {1, 2, 4, 8, 16, 32, 64, 128, 258, 512};

	affiche(tab);

	getch();
	return 0;
}
