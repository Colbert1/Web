#include <stdio.h>
#include <tchar.h>

typedef struct
{
	char nom[10];
	char prenom[10];
	int age;
	float note;
} fiche;

int main(int argc, char *argv[])
{
	fiche f1;
	f1.note = 12;
	strcpy(f1.nom, "Colbert");
	strcpy(f1.prenom, "Gregoire");
	f1.age = 18;
	printf("Nom: %s \n", f1.nom);
	printf("Prenom: %s\n", f1.prenom);
	printf("Age: %d \n", f1.age);
	printf("Note: %f \n", f1.note);
	getch();
	return 0;
}
