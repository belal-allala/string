#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100], nouvelle_chaine[100];
    int i, j = 0;
    printf("entrer une chaine de caracteres : ");
    scanf("%s", chaine);
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') {
            nouvelle_chaine[j] = chaine[i];
            j++;}}
    nouvelle_chaine[j] = '\0';
    printf("la chaine sans espaces est : %s\n", nouvelle_chaine);
    return 0;}