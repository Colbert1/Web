#include <stdio.h>
#include <tchar.h>
#include <conio.h>

void main()
{
	float adr1, adr2;
	adr1 = -45.78;
	adr2 = 678.89;
	printf("adr1 %d \n", &adr1);
	printf("adr2 %d \n", &adr2);
	getch();
}