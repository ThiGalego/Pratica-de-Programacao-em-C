#include <stdio.h>
#include <string.h>

void imprimirPorExtenso(char digito) {
    switch (digito) {
        case '0': printf("zero "); break;
        case '1': printf("um "); break;
        case '2': printf("dois "); break;
        case '3': printf("três "); break;
        case '4': printf("quatro "); break;
        case '5': printf("cinco "); break;
        case '6': printf("seis "); break;
        case '7': printf("sete "); break;
        case '8': printf("oito "); break;
        case '9': printf("nove "); break;
    }
}

int main() {
    char numeroStr[50];

    printf("Digite um número inteiro: ");
    fgets(numeroStr, sizeof(numeroStr), stdin);

    size_t len = strlen(numeroStr);
    if (len > 0 && numeroStr[len - 1] == '\n') {
        numeroStr[len - 1] = '\0';
    }

    int i = 0;
    if (numeroStr[0] == '-') {
        printf("menos ");
        i = 1;
    }

    for (; numeroStr[i] != '\0'; i++) {
        imprimirPorExtenso(numeroStr[i]);
    }

    printf("\n");
    return 0;
}
