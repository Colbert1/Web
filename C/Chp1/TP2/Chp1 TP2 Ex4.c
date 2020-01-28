#include <stdio.h>
#include <conio.h>

int main()
{
  int nbeleve;
  int i,age,questionnaire[6];
  
  printf("Combien d'élèves ? \n");
  scanf("%d",&nbeleve);
  
  for(i=0;i<nbeleve;i++)
  {
     printf("age ? \n");
     scanf("%d",&questionnaire[0]);
     
     printf("Sexe ? (0:H 1:F) \n");
     scanf("%d",&questionnaire[1]);
     
     printf("Combien de fois allez vous au cinéma par mois \n");
     scanf("%d",&questionnaire[2]);    
     
     printf("Macdonald ou quick ? (0:macdonald 1:quick) \n");
     scanf("%d",&questionnaire[3]);
     
     printf("Pratiquez vous un sport ? (0:oui 1:non) \n");
     scanf("%d",&questionnaire[4]);
     
     if(questionnaire[4]==0)
     {
         printf("Pratiquez vous un des sport suivants (foot,tennis,basket,judo,natation) (0:oui 1:non) \n");
         scanf("%d",&questionnaire[5]);
     }  
     
     for(int j=0;j<6;j++)
     {
       printf("%d  \n",questionnaire[j]);

     }
  }
  
  
    
getch();
return 0;   
}
