#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Digite uma string: ");
    scanf("%s", str);

    if (strcmp(str, "engenharia") == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}