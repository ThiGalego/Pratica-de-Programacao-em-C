#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[81];
    int total = 0, pontuacao = 0, numeros = 0, minusculas = 0;

    printf("Digite uma string (máx. 80 caracteres): ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    total = len;

    for (int i = 0; i < len; i++) {
        if (ispunct(str[i])) {
            pontuacao++;
        } else if (isdigit(str[i])) {
            numeros++;
        } else if (islower(str[i])) {
            minusculas++;
        }
    }

    printf("\nRelatório da string:\n");
    printf("Total de caracteres: %d\n", total);
    printf("Caracteres de pontuação: %d\n", pontuacao);
    printf("Caracteres numéricos: %d\n", numeros);
    printf("Caracteres minúsculos: %d\n", minusculas);

    return 0;
}
