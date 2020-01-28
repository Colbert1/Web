#include <stdio.h>
#include <tchar.h>

typedef struct
{
	char nom[10];
	char prenom[10];
	int age;
	float note;
}
fiche;
//void affiche-tab-fiche(fiche *tab, int nb);
//void saisie-fiche (fiche*f);

int main()
{
	int i;
	fiche fiches[100];
	fiches[0].age=20;
	for ((i = 0); i < 100; i++) {
		saisie-fiche(&fiches[i]);
	}
}
void saisie-fiche (fiche*f)
{
	scanf("%s", f-> nom);
	scanf("%s", f-> prenom);
	scanf("%d", &f-> age);

}
void afficher-tab-fiche(fiche *tab, int nb)
{
	int i;
	for (i = 0; i < nb; i++) {
		printf("Fiche %d: \n",i+1);
		printf("\t Nom: %s \n",tab[i].nom);
		printf("\t Prenom: %s \n",tab[i].prenom");
		printf("\t Age: %s \n",tab[i].age");
	}
}
