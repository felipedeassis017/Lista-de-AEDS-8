#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char ch;
    int pos;

    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    printf("Digite a posição: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < strlen(str)) {
        str[pos] = ch;
    }

    printf("Nova string: %s\n", str);

    return 0;
}