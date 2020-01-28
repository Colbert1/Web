#include <stdio.h>

  typedef char _TCHAR;


int main(int argc, char* argv[])


{

 int A[40];
 int N;
 int I;
 int J;
 int AIDE;
 int PMAX;



 printf("Dimension du tableau (max.30) : ");
 scanf("%d", &N );
 for (J=0; J<N; J++)
    {
	 printf("Element %d : ", J);
     scanf("%d", &A[J]);
	}

 printf("Tableau donne :\n");
 for (J=0; J<N; J++)
    printf("%d ", A[J]);
 printf("\n");


 for (I=0; I<N-1; I++)
	 {

      PMAX=I;
      for (J=I+1; J<N; J++)
		  if (A[J]<A[PMAX]) PMAX=J;

	  AIDE=A[I];
      A[I]=A[PMAX];
      A[PMAX]=AIDE;
	 }


 printf("Tableau trie :\n");
 for (J=0; J<N; J++)
     printf("%d ", A[J]);
 printf("\n");

 getch();



 return 0;
}
