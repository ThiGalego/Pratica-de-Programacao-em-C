#include <stdio.h>

void minha_strcpy(char *dest, const char *source) {
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0'; 
}

int main() {
    char origem[100];
    char destino[100];

    printf("Digite uma string para copiar: ");
    fgets(origem, sizeof(origem), stdin);

    int i = 0;
    while (origem[i] != '\0') {
        if (origem[i] == '\n') {
            origem[i] = '\0';
            break;
        }
        i++;
    }

    minha_strcpy(destino, origem);

    printf("String copiada: %s\n", destino);

    return 0;
}
