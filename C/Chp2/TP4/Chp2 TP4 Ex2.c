#include <stdio.h>
#include <conio.h>

  typedef char _TCHAR;

void tri_permutation (int *T)
{
    int i,j,k,c;

	for(i=1;i<TAILLE;i++)
	{
		if ( T[i] < T[i-1] )
		{

			j = 0;

			while ( T[j] < T[i] ) j++;
			c = T[i]; 			for( k = i-1 ; k >= j ; k-- ) T[k+1] = T[k];
			T[j] = c;
		}
	}
}

int main()
{

int tableau_aleatoire[TAILLE];
int i,j=0;
int tmp=0;
srand(time(NULL));

for(i=0;i<20;i++)
{
   j=rand()%1000;
	tableau_aleatoire[i]=j+1;
printf("|%d| -%d-  ",i,tableau_aleatoire[i]);
}


tri_permutation(tableau_aleatoire);

for(i=0;i<TAILLE;i++)
{
	printf("[%d] %d\n",i,tableau_aleatoire[i]);
}



	  getch();

	return 0;
}


