#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int k;

    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] + k;
    }

    printf("Palavra criptografada: %s\n", str);

    return 0;
}