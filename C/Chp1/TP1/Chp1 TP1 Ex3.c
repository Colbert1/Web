#include<stdio.h>
#include<stdlib.h> //pour exit
#include<conio.h>

main()
{
 float x;
 printf("entrez votre nombre");
 scanf("%f",&x);

 if( !x) //x vaut 0
 printf("erreur de saisie");
 else
 printf("l'inverse du nombre est :%f",1/x);

 getch();
}

