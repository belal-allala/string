#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100], chaine2[100];
    printf("entrer la premiere chaine : ");
    scanf("%s", chaine1);
    printf("entrer la deuxieme chaine : ");
    scanf("%s", chaine2);
    if (strcmp(chaine1, chaine2) == 0) {
        printf("Les chaines sont egales.\n");}
    else {
        printf("Les chaines sont differentes.\n");}
    return 0;}