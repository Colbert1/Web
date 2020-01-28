#include<stdio.h>

void main()
{
	float note;
	scanf("%f",&note);
	while(note<0|note>20)
	{
	scanf("%f",&note);
	}
	printf("%f",note);
	system("PAUSE");
	return 0;

}
