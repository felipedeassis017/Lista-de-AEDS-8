#include <stdio.h>
#include <string.h>

int main() {
    char word1[50], word2[50], result[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", word1);
    printf("Digite a segunda palavra: ");
    scanf("%s", word2);

    strcpy(result, word1);
    strcat(result, word2);

    printf("Nova string concatenada: %s\n", result);

    return 0;
}