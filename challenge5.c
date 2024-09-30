#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i, j, longueur;
    printf("entrer une chaine de caracteres : ");
    scanf("%s", chaine);
    longueur = strlen(chaine);
    for (i = 0, j = longueur - 1; i < j; i++, j--) {
        char temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;}
    printf("la chaine inversee est : %s\n", chaine);
    return 0;}