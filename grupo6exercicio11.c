#include <stdio.h>
#include <string.h>

void inserirCaractere(char *str, char c, int pos) {
    int len = strlen(str);

    for (int i = len; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    str[pos] = c;

    str[len + 1] = '\0';
}

int main() {
    char texto[100];
    char caractere;
    int pos;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("Digite o caractere que deseja inserir: ");
    scanf("%c", &caractere); 

    printf("Digite o índice de inserção: ");
    scanf("%d", &pos); 

    if (pos < 0 || pos > len) {
        printf("Índice inválido!\n");
        return 1;
    }

    inserirCaractere(texto, caractere, pos);

    printf("String modificada: %s\n", texto);

    return 0;
}
