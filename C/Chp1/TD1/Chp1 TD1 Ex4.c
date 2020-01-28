#include<stdio.h>

void main()
{
	int i,note,somme;
	somme=0;
	for(i=0;i<30;i++)
	{
		scanf("%d",&note);
		somme=somme+note;
	}
	somme=somme/i;
	printf("%d",somme);
	return 0;
}
