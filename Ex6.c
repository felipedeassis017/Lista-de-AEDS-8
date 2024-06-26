#include <stdio.h>
#include <string.h>

int main() {
    char word1[50], word2[50], word3[50], result[150];

    printf("Digite a primeira palavra: ");
    scanf("%s", word1);
    printf("Digite a segunda palavra: ");
    scanf("%s", word2);
    printf("Digite a terceira palavra: ");
    scanf("%s", word3);

    strcpy(result, word1);
    strcat(result, "-");
    strcat(result, word2);
    strcat(result, "-");
    strcat(result, word3);

    printf("String concatenada: %s\n", result);

    // Invertendo a string resultante
    int len = strlen(result);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}