#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
	FILE *fichier;
	char caractere;
	int verif=0;

	fichier = fopen("./source.txt","r");

	if (fichier == NULL)
	{
		printf("Impossible d'ouvrir le fichier source.txt");
	}

	while (verif == 0 && fichier != NULL) {
		caractere = getc(fichier);
		printf("%c",caractere);
		verif = feof(fichier);
	}

fclose(fichier);

getch();
return 0;
}
