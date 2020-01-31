#include <stdio.h>
#include <tchar.h>
#include <conio.h>
char mot_de_passe(char MDP[])
{
	int i = 0;
	char verifch = '\0';
	while (verifch != 13)
	{
		verifch = getch();
		if (verifch != 13)
		{
			MDP[i] = verifch;
			printf("*");
			i++;
		}
	}
	MDP[i] = '\0';
}
int main()
{
	char MDP[30];
	printf("Entrez un mot de passe: \n");
	mot_de_passe(MDP);
	printf("\n");
	printf("Le mot de passe est: \n%s", MDP);
	getch();
	return 0;
}
