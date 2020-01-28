#include <stdio.h>
#include <conio.h>

int main()
{
  float poids,prix;
  
  printf("saisir poids de la lettre en g \n");
  
  scanf("%f",&poids);
  
  while(poids<=0 || poids>=1000)
  {
      scanf("%f",&poids); 
  }
  
  if(poids<20)
  {
     prix= 3;         
  }
  
  if(poids>=20 && poids<50)
  {
      prix= 3.95;         
  }
  
  if(poids>=50)
  {
      prix= 5.90;         
  }
  
printf("le prix est %.2f \n",prix);
  

    
getch();
return 0;   
}
