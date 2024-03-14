#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plusMoins (int valeur_a_trouver)
{

int choix_joueur, compteur, tentatives, tentative;
compteur = 0;
tentatives = 6;
tentative = 6;
while (compteur < tentatives){
        printf ("insérer une valeur, vous avez %d tentatives :\n", tentative);
        scanf ("%d", &choix_joueur);
    
                if (choix_joueur < valeur_a_trouver)
                {
                        printf ("plus\n");
                        compteur ++;
                        tentative --;
                } else if (choix_joueur > valeur_a_trouver)
                {
                        printf ("moins\n");
                        compteur ++;
                        tentative --;
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
