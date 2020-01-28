#include <stdio.h>
main()
{
int n;
scanf("%d",&n) ;
switch (n)
{
case 0 : printf (" nul\n ") ;
case 1 :
case 2 : printf ("petit\n");
break;
case 3 :
case 4 :
case 5 : printf("moyen\n");
default : printf("grand\n");
system("PAUSE");
}
}

