#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[])
{
	int T[10],i,nbre,plusPetit,plusGrand;

	plusGrand=-32767;
	plusPetit=32767;

	for (i = 0; i < 10; i++) {
		printf("Quelle est la valeur de la case : %d \n",i+1);
		scanf("%d",&nbre);
		T[i]=nbre;

		if (nbre>plusGrand) {
			plusGrand=nbre;
		}
		if (nbre<plusPetit) {
			plusPetit=nbre;
		}
	}
		printf("Le plus grand nombre est : %d \n",plusGrand);
		printf("Le plus petit nombre est : %d \n",plusPetit);
	getch();
	return 0;
}
