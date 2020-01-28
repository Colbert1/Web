int main(int argc, char* argv[])
{
	FILE *fichier1,*fichier2;
	char caractere;
	int test=0;

	fichier1 = fopen("./source.txt","r");
	fichier2 = fopen("./dest2.txt","w");

	if (fichier1==NULL) {
		printf("Le fichier ne peut pas s'ouvrir..\n");
	}
	if (fichier2==NULL){
		printf("Le fichier ne peut pas s'ouvrir..\n");
	}

	while (test == 0 && fichier1 != NULL && fichier2 !=NULL) {

		caractere = getc(fichier1);
		if (caractere!=97) {
			putc(caractere,fichier2);
		}
		test = feof(fichier1);
	}

	fclose(fichier1);
	fclose(fichier2);

	getch();
	return 0;
}
