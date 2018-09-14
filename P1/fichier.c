#include <stdio.h>
#include <stdio.h>
#define o "o"
#include "fichier.h"


void workFile(char *pointeurChaine){
    printf("contenu : '%s'\n", pointeurChaine);
    FILE *fichier = NULL;
    printf("Voulez vous supprimer le contenu du fichier avant d'ajouter votre phrase ? (O/N) : ");
    char ouiNon;
    scanf("%c", &ouiNon);

    if (&ouiNon == o){
        fichier = fopen("data.txt","w+");
    }
    else{
        fichier = fopen("data.txt","r+");
    }

    if (fichier == NULL){
        printf("Erreur lors du chargement du fichier\n");
        return;
    }
    else{
        fputs(pointeurChaine, fichier);
        fclose(fichier);
    }
}

