#include <stdio.h>
#include <conio.h>
void appels (double x, double y, int v1, v2)
	{
		printf («%f*%f = %f\n »,x,y,produit(x,y)) ;
		printf(« %d/%d = %d\n », v1, v2, div(v1, v2)) ;
	}
	int main (int argc, char**argv)
	{
		double x, y ;
		int val1, val2 ;
		printf («Entrez deux réels et deux entiers : ») ;
		scantf (« %f%f%d,&x,&y,&val1,&val2);
		appels (x, y, val1, val2);
		return 0 ;
	}

