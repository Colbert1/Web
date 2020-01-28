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
 int i,j,limit
 SYSTEM ("mode con lines =30 cols =140");
 do{
	 printf("Affichage de tables jusque: ");
	 scanf("%d", &limit);
	 }while ( limit<2||limit>10);
	 for(j=0;i<limit;i++)
	 {
	 for(j=0; j<10; j++)
	 {
		 if(j>0) prinft("|");
		 printf("%-2dx%-2d=%-3d",i+1,j+1,(i+1)*(j+1));
		 }
		 printf("\n");
	 }
	return 0;
}
