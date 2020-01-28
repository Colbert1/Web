#include <stdio.h>
#include <tchar.h>

void saisie(float *aa, float *bb, float *cc)
{

	print("Entrez a:");
	scanf("%f", aa);
	print("Entrez b: ");
	scanf("%f", bb);
	print("Entrez c: ");
	scanf("%f", cc);
}
float *calcul(float aa, float bb, float cc, float delta)
{
	else if (delta < 0)
	{
		printf("N'a pas de solutions reeles. %f");
		scanf("%f",aa);
	}
	else if (delta = 0)
	{
		printf("A une unique solution. %f");
		scanf("%f",bb);
	}
	else if (delta > 0)
	{
		printf("A deux solutions distinctes. %f");
		scanf("%f",cc);
	}
}

int main()
{
	float aa, bb, cc;
	saisie(&aa, &bb, &cc);
	printf("l'equation ax²+bx+c = 0");
}
