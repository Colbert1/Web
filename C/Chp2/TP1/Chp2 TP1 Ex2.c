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
	float T1[10],T2[10];
	int i, j=0;

	for (i = 0; i < 10; i++) {
	printf("Entrez la valeur de la case %d \n",i+1);
	scanf("%f",&T2[i]);

	if (T2[i]>0) {
		T1[j++]=T2[i];
		}

	}
	for (i = 0; i < j; i++) {
		printf("La valeur de la case %d du tableau 1 est : %f \n",i+1,T1
		[i]);
	}
	getch();
	return 0;
}
