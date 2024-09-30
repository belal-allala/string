#include <stdio.h>
#include <string.h>

int main() {
    char chaine_principale[100], sous_chaine[100];
    printf("entrer la chaine principale : ");
    scanf("%s", chaine_principale);
    printf("entrer la sous-chaine a rechercher : ");
    scanf("%s", sous_chaine);
    if (strstr(chaine_principale, sous_chaine) != NULL) {
        printf("la sous-chaine '%s' est presente dans la chaine principale.\n", sous_chaine);}
    else {
        printf("la sous-chaine '%s' n est pas presente dans la chaine principale.\n", sous_chaine);}
    return 0;}