#include <stdio.h>
#include <string.h>

void imprimirNormal(const char *str, int index) {
    if (str[index] == '\0') {
        return;
    }
    putchar(str[index]);
    imprimirNormal(str, index + 1);
}

void imprimirInvertido(const char *str, int index) {
    if (str[index] == '\0') {
        return;
    }
    imprimirInvertido(str, index + 1);
    putchar(str[index]);
}

int main() {
    char str[201];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("\nString normal: ");
    imprimirNormal(str, 0);

    printf("\nString invertida: ");
    imprimirInvertido(str, 0);

    printf("\n");

    return 0;
}
