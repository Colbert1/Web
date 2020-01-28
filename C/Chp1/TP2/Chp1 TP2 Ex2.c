#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b,c;
  int tabclassement[2];
  int flag=1;
  int tampon;
  int compteur,compteur2;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  tabclassement[0]=a;
  tabclassement[1]=b;
  tabclassement[2]=c;

  
  while(flag)
  {
     for(compteur=0;compteur<3;compteur++)
     {
       for(compteur2=compteur+1;compteur2<3;compteur2++)
       {
            if(tabclassement[compteur]>tabclassement[compteur2])
            {
              tampon=tabclassement[compteur];
              tabclassement[compteur]=tabclassement[compteur2];
              tabclassement[compteur2]=tampon;
              
            }
             
            
       }
       
          
           if(tabclassement[0]<=tabclassement[1] && tabclassement[1]<=tabclassement[2])
           {
             flag=0; 
           }
     }
     
     
  };
  
 
  
     for(int compteur=0;compteur<3;compteur++)
     {
        printf("%d \n",tabclassement[compteur]);     
     }
  
  

    
    
getch();
return 0;   
}
