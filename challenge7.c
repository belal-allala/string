#include <stdio.h>
#include <ctype.h>

int main() {
    char chaine[100];
    int i;
    printf("entrer une chaine de caracteres : ");
    scanf("%s", chaine);
    for (i = 0; chaine[i] != '\0'; i++) {
        chaine[i] = toupper(chaine[i]);}
    printf("La chaine en majuscules est : %s\n", chaine);
    return 0;}