#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contarPalavras(const char *str) {
    int count = 0;
    int inPalavra = 0;

    while (*str) {
        if (!isspace(*str)) {
            if (!inPalavra) {
                count++;
                inPalavra = 1;
            }
        } else {
            inPalavra = 0;
        }
        str++;
    }

    printf("A string contém %d palavra(s).\n", count);
}

int main() {
    char frase[201];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    size_t len = strlen(frase);
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }

    contarPalavras(frase);

    return 0;
}
