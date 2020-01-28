#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  int resultat=0;
  printf("Saisir a et b \n");
  scanf("%d",&a);
  scanf("%d",&b);
  
  for(int compteur=0;compteur<b;compteur++)
  {
          resultat= resultat+a;
  
  } 
  
  printf("le produit est %d \n",resultat); 
    
    
    
    
getch();
return 0;   
}
