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
	float T[10];
	int i;

	int nombre1 = 0, nombre2 = 0, som=0;


	printf("Entrez le 1er nombre : ");
	scanf("%d", &nombre1);
	printf("Entrez le 2eme nombre : ");
	scanf("%d", &nombre2);

	som = nombre1 + nombre2;

	printf("%d+%d = %d", nombre1, nombre2, som);




getch();
	return 0;
}
