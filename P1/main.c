#include <stdio.h>
#include "fichier.h"

int main()
{
    printf("Rentrer une chaîne de caractère (pas plus de 200): \n");
    char chaine[200];
    scanf("%s",chaine);
    workFile(chaine);
    return 0;
}

