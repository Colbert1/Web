#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
char str[50];
scanf("%s",str);

for (i=strlen(str)-1;i>=0;i--);
{
	printf("%c",str[i]);
}
	return 0;
}
