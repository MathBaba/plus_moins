#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plusMoins (int valeur_a_trouver)
{

int choix_joueur, compteur, tentatives, mode;

compteur = 0;

printf("Choississez votre mode de difficulté : 1 pour facile, 2 pour moyen, 3 pour difficile :");
scanf ("%d", &mode);

if (mode == 1)
{
    tentatives = 100;
} else if (mode == 2)
{
    tentatives = 25;
} else if (mode == 3){
    tentatives = 10;
} else {
    printf ("Vous n'avez pas séléctionner une difficulté");
}


while (compteur < tentatives){
        printf ("insérer une valeur, vous avez %d tentatives :\n", tentatives);
        scanf ("%d", &choix_joueur);
    
                if (choix_joueur < valeur_a_trouver)
                {
                        printf ("plus\n");
                        compteur ++;
                        tentatives --;
                } else if (choix_joueur > valeur_a_trouver)
                {
                        printf ("moins\n");
                        compteur ++;
                        tentatives --;
                } else 
                {
                        printf ("bingo\n");
                        break;  
                } 
        }
        if (compteur == tentatives)
        {
            printf ("vous avez perdu ! Le nombre était %d", valeur_a_trouver);
        }
}





int main()
{

srand(time(NULL));
int valeur_a_trouver = rand() % 100 + 0;

plusMoins (valeur_a_trouver);

return 0;

}                
