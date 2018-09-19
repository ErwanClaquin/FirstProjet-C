#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"
void viderSdin(void);


int main(void)
{
    char chaine[200];
    char *pc;
    printf("Rentrer une chaîne de caractère (pas plus de 200): \n");


    //Méthode vu sur Internet
    fflush(stdout); //libère le buffer
    fgets(chaine, sizeof (chaine), stdin); //Récupère fgets(où, la taille max, quelle entrée)
    if ((pc = strchr(chaine,'\n')) == NULL){ //Si il n'ya pas de caractère \n dans chaine
        printf("L'entrée est trop longue ou tronquée");
        viderSdin();
    }
    else{
        *pc = '\0'; //??
        workFile(chaine);
    }


    return 0;
}

void viderSdin(void){
    scanf("%*[^\n]"); //Pas compris
    getchar();

}
