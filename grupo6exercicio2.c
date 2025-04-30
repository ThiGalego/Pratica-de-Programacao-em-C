#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    printf("Digite uma frase (palavras separadas por espaço): ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char *palavra = strtok(str, " ");
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    return 0;
}
