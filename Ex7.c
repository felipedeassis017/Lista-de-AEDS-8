#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isFloat(char *str) {
    int point_seen = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.') {
            if (point_seen) return 0;
            point_seen = 1;
        } else if (!isdigit(str[i])) {
            return 0;
        }
    }
    return point_seen;
}

int isInt(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[50];

    printf("Digite uma string: ");
    scanf("%s", str);

    if (isFloat(str)) {
        printf("float\n");
    } else if (isInt(str)) {
        printf("int\n");
    } else {
        printf("não se aplica\n");
    }

    return 0;
}