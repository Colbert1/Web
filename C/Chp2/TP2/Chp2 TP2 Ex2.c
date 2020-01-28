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
{        float nom[3][4],som=0,moy= 0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Entrez la valeur ");
			scanf("%f",&nom[i][j]);
        }
	}
	for(i=0;i<3;i++)
	{
		som = 0;
		for(j=0;j<4;j++)
		{
			som= som + nom[i][j];
		}
		moy= som /4;
		printf("Moyenne de la ligne : %f\n", moy);
	}



	getch();
	return 0;
}
