#include <stdio.h>
#include <tchar.h>

int main()
{

    int i;
    char *chainecarac;
    chainecarac = malloc(50 * sizeof(char *));
    scanf("%s", chainecarac);
    for (i = 0; i < strlen(chainecarac); i++)
    {
        printf("%d : %c \n", &chainecarac[i], chainecarac[i]);
    }
    free(chainecarac);

    getch();
    return 0;
}
