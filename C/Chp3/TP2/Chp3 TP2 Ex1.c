#include <stdio.h>
#include <tchar.h>
#include <math.h>

void multiple2(int x) {
	if (x%2==0) {
		printf("Il est pair.\n");
        printf("C'est un multiple de 2.\n");
	}
}
void multiple3(int x) {
	if (x%3==0) {
		printf("C'est un multiple de 3.\n");
	}

}
int main(int argc, char* argv[])
{
	int x,y;
	printf("Entrez un nombre entier:");
	scanf("%d",&x);
	multiple2(x);
	multiple3(x);
	if (x%6==0) {
		printf("C'est un multiple de 6.\n");
	}
	system("PAUSE");
	return 0;
}
