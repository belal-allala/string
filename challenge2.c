#include <stdio.h>
int main() {
    char chaine[100];
    int i = 0;
    printf("entrer une chaine de caracteres : ");
    scanf("%s", chaine);
    while (chaine[i] != '\0') {
        i++;}
    printf("la longueur de la chaine est : %d\n", i);
    return 0;}