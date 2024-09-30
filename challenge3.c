#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100], chaine2[100], chaine3[200];
    int i, j;

    printf("entrer la premiere chaine : ");
    scanf("%s", chaine1);
    printf("entrer la deuxieme chaine : ");
    scanf("%s", chaine2);
    for (i = 0; chaine1[i] != '\0'; i++) {
        chaine3[i] = chaine1[i];}
    j = 0;
    while (chaine2[j] != '\0') {
        chaine3[i] = chaine2[j];
        i++;j++;
    printf("la chaine concatenee est : %s\n", chaine3);
    return 0;}