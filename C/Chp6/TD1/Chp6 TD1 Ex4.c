﻿#include <stdio.h>
#include <tchar.h>

typedef struct
{
	char nom[10];
	char prenom[10];
	int nbnotes;
	float note[50];
} noteseninfo;
void saisie(noteseninfo *classe, int *nbeleves)
{
	int i;
	char nom[10], prenom[10];
	int indexExistingStudent = -1;
	noteseninfo *Etudiant = NULL;
	float saisie = 0;

	printf("Saisissez votre nom : ");
	scanf("%s", nom);
	printf("Saisissez votre prenom : ");
	scanf("%s", prenom);

	for (i = 0; i < *nbeleves; i++)
	{
		if (strcmp(nom, classe[i].nom) == 0 && strcmp(prenom, classe[i].prenom) == 0)
		{
			indexExistingStudent = i;
			break;
		}
	}

	if (indexExistingStudent >= 0)
	{
		Etudiant = &classe[indexExistingStudent];
	}
	else
	{
		Etudiant = &classe[*nbeleves];
		strcpy(Etudiant->nom, nom);
		strcpy(Etudiant->prenom, prenom);
		Etudiant->nbnotes = 0;

		*nbeleves = *nbeleves + 1;
	}

	while (saisie >= 0 && Etudiant->nbnotes < 50)
	{
		printf("Saisir une note : ");
		scanf("%f", &saisie);

		if (saisie >= 0)
		{
			Etudiant->note[Etudiant->nbnotes] = saisie;
			Etudiant->nbnotes++;
		}
	}
}
void affiche(noteseninfo *classe, int nbEtu)
{
	int i, j;
	for (i = 0; i < nbEtu; i++)
	{
		printf("\nNom: %s\n", classe[i].nom);
		printf("Prenom: %s\n", classe[i].prenom);
		printf("Note: \n");
		for (j = 0; j < classe[i].nbnotes; j++)
		{
			if (j > 0)
			{
				printf(", ");
			}

			printf("%.2f", classe[i].note[j]);
		}
	}
}
int main()

{
	noteseninfo *eleves = NULL;
	int menu, tape, classe, nbetu = 0;
	int quit = 0;
	eleves = malloc(25 * sizeof(noteseninfo));

	while (quit == 0)
	{
		printf("1-Eleve \n");
		printf("2-Affichage des notes \n");
		scanf("%d", &tape);
		if (tape == 1)
		{
			saisie(eleves, &nbetu);
		}
		else if (tape == 2)
		{
			affiche(eleves, nbetu);
		}
		else
		{
			quit = 1;
		}
		printf("\n");
	}

	return 0;
}
