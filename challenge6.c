#include <stdio.h>

int main() {
    char chaine[100], caractere;
    int i, compte = 0;
    printf("entrer une chaine de caracteres : ");
    scanf("%s", chaine);
    printf("entrer un caractere a compter : ");
    scanf(" %c", &caractere); 
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere) {
            compte++;}}
    printf("le caractere '%c' apparait %d fois dans la chaine.\n", caractere, compte);
    return 0;}