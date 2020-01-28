 #include<stdio.h>
 #include<conio.h>

void main()
{
int a,b,c;
 printf("Entrer le nombre de produits");
	scanf("%d",&a);
 printf("Entrer le prix de l'article a l'unite");
	scanf("%d",&b);
	c=a*b;
 if(c>500);
	{c=c*0.9;}
 printf("Le prix est de %d",c);
 getch();
 }
