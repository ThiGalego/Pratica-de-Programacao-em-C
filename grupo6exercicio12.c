#include <stdio.h>
#include <ctype.h>

char* encontrarEspaco(char* str) {
    while (*str != '\0') {
        if (isspace(*str)) {  
            return str;  
        }
        str++;
    }
    return NULL;  
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int len = 0;
    while (texto[len] != '\0') {
        if (texto[len] == '\n') {
            texto[len] = '\0';
            break;
        }
        len++;
    }

    char* espaco = encontrarEspaco(texto);

    if (espaco != NULL) {
        printf("O primeiro espaço foi encontrado na posição: %ld\n", espaco - texto);
        printf("O caractere no endereço encontrado é: '%c'\n", *espaco);
    } else {
        printf("Não foi encontrado nenhum espaço na string.\n");
    }

    return 0;
}
