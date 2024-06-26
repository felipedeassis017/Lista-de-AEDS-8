#include <stdio.h>
#include <string.h>

int main() {
    char word1[50], word2[50], word3[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", word1);
    printf("Digite a segunda palavra: ");
    scanf("%s", word2);
    printf("Digite a terceira palavra: ");
    scanf("%s", word3);

    if (strcmp(word1, word2) > 0) {
        char temp[50];
        strcpy(temp, word1);
        strcpy(word1, word2);
        strcpy(word2, temp);
    }
    if (strcmp(word2, word3) > 0) {
        char temp[50];
        strcpy(temp, word2);
        strcpy(word2, word3);
        strcpy(word3, temp);
    }
    if (strcmp(word1, word2) > 0) {
        char temp[50];
        strcpy(temp, word1);
        strcpy(word1, word2);
        strcpy(word2, temp);
    }

    printf("A última palavra em ordem alfabética é: %s\n", word3);

    return 0;
}