#include <stdio.h>

int main(int argc, char *argv[])
{int a,b,n,k=0;
	char *p;
	p=malloc(100*sizeof(char));
	puts("Entrez une phrase \a (max 100 caractères) \a");
	gets(p);
	n=strlen(p);
	for(b=0;b<n;b++)
	{
		if(p[b]==' ')
		{
			for(a=b;a<n;a++)
			{
				p[a]=p[a+1];
			}
		}
	}
	printf("%s\n",p);
	getch();
	return 0;
}
