#include <stdio.h>
#include <tchar.h>
typedef struct
{
    char nom[10];
    int Point;
    float Score[50];
} ScoreDart;

void SaisieJoueur(ScoreDart *Partie, int *nbJoueur)
{
    int i;
    char nom[15];
    int JoueurExistant = -1;
    ScoreDart *Joueur = NULL;
    float SaisieJoueur = 0;
    printf("Saisissez votre nom : ");
    scanf("%s", nom);
    for (i = 0; i < *nbJoueur; i++)
    {
        if (strcmp(nom, Partie[i].nom) == 0)
        {
            JoueurExistant = i;
            break;
        }
    }

    if (JoueurExistant >= 0)
    {
        Joueur = &Partie[JoueurExistant];
    }
    else
    {
        Joueur = &Partie[*nbJoueur];
        strcpy(Joueur->nom, nom);
        Joueur->Point = 0;

        *nbJoueur = *nbJoueur + 1;
    }
}
void Affichage(ScoreDart *Partie, int nbJ)
{
    int i, j;
    for (i = 0; i < nbJ; i++)
    {
        printf("\nNom: %s\n", Partie[i].nom);
        for (j = 0; j < Partie[i].Score; j++)
        {
            if (j > 0)
            {
                printf(", ");
            }
        }
    }
}
int Random()
{
    int nbgen;
    int egen;

    nbgen = rand() % 22 + 0;

    egen = rand() % 3 + 1;

    if (nbgen == 21)
    {

        nbgen = 25;
        egen = rand() % 2 + 1;
    }

    //printf("%d\n",nbgen);
    return nbgen;
}
void TableauScore(ScoreDart *Partie)
{
    int score[4][7] = {{15, 16, 17, 18, 19, 20, 25}};
    int y;

    for (y = 0; y < 7; y++)
    {
        printf("%d ", score[0][y]);
    }

    printf("\n");
    for (y = 0; y < 7; y++)
    {
        score[1][y] = Random();
        printf("%d  ", score[1][y]);
    }
    printf("\n");
    for (y = 0; y < 7; y++)
    {
        score[2][y] = Random();
        printf("%d  ", score[2][y]);
    }
    printf("\n");
    for (y = 0; y < 7; y++)
    {
        score[3][y] = Random();
        printf("%d  ", score[3][y]);
    }
}
void Jeu(ScoreDart *Partie)
{
    //
}

int main()

{
    ScoreDart *Joue = NULL;
    int menu, tape, Partie, nbj = 0;
    int quit = 0;
    Joue = malloc(25 * sizeof(ScoreDart));
    srand(time(NULL));
    while (quit == 0)
    {
        printf("COLBERT Gregoire\n");
        printf("VAST Apoline\n");
        printf("\n\n\n\n");
        printf("			     |------------|\n\n");
        printf("			    |JEU FLECHETTE|\n\n");
        printf("			     |------------|\n\n\n");
        printf("                     	        1-Joueur \n");
        printf("                     	        2-Jeu \n");
        printf("                       	        3-Score \n\n");
        scanf("%d", &tape);
        if (tape == 1)
        {
            SaisieJoueur(Joue, &nbj);
        }
        else if (tape == 2)
        {
            //   Jeu
        }
        else if (tape == 3)
        {
            TableauScore(&Partie);
        }
        printf("\n");
    }

    return 0;
}
