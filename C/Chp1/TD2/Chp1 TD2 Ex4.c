#include <stdio.h>
main()
{
int i, n, som;
som=0;
for( i=0; i<4; i++)
{ printf ("donnez un entier");
scanf ("%d",&n) ;
som+=n ;
}
printf (" somme : %d\n ",som) ;
getch();
return 0;
}
