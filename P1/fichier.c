#include <stdio.h>
#include <stdio.h>
#include "fichier.h"


void workFile(char *pointeurChaine){
    char ouiNon;
    FILE *fichier = NULL;
    printf("contenu : '%s'\n", pointeurChaine);
    printf("Voulez vous supprimer le contenu du fichier avant d'ajouter votre phrase ? (O/N) : ");
    fflush(stdout); //Libérer le buffer
    scanf("%c", &ouiNon);

    if (ouiNon == 'o'){
        fichier = fopen("data.txt","w+");
        printf("Contenu supprimé !\n");
    }
    else{
        fichier = fopen("data.txt","a+");
        printf("Contenu sauvegardé !\n");
    }

    if (fichier == NULL){
        printf("Erreur lors du chargement du fichier\n");
        return;
    }
    else{
        char chainePourAfficher[20000] = "";
        fputs(pointeurChaine, fichier); //Censé mettre un contenu mais n'en mets pas
        fputs("\n",fichier);
        printf("Voici ce qu'il y'a dans le fichier : ");
        while(fgets(chainePourAfficher, sizeof (chainePourAfficher), fichier) != NULL){
            printf("%s\n",chainePourAfficher);
        }
        fclose(fichier);
    }
}

