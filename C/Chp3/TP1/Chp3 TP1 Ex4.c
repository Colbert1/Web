#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int pgcd(int nb1, int nb2)
{
	if (nb1 % nb2 == 0)
		return nb2;
	return pgcd(nb2, nb1 % nb2);
}

int main()

{
	int nb1, nb2;

	printf("Entrez le premier nombre: ");
	scanf("%d", &nb1);
	printf("Entrez le seconde nombre: ");
	scanf("%d", &nb2);

	printf("Le pgcd est %d\n", pgcd(nb1, nb2));

	getch();
	return 0;
}
