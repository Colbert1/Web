#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
	FILE *fichier;
	char caractere;

	fichier = fopen("./alphabet.txt","w");
    fprintf(fichier,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");

fclose(fichier);

getch();
return 0;
}
