#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char ch;
    int count = 0;

    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na string.\n", ch, count);

    return 0;
}