#include <stdio.h>

void removerCaracter(char *str, char c) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != c) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; 
}

int main() {
    char texto[100];
    char caractere;

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

    printf("Digite o caractere que deseja remover: ");
    scanf(" %c", &caractere); 

    removerCaracter(texto, caractere);

    printf("String resultante: %s\n", texto);

    return 0;
}
