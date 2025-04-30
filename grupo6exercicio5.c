#include <stdio.h>
#include <string.h>

int lerConfirmacao() {
    char resposta[10];

    while (1) {
        printf("Digite 'SIM' ou 'NAO': ");
        fgets(resposta, sizeof(resposta), stdin);

        size_t len = strlen(resposta);
        if (len > 0 && resposta[len - 1] == '\n') {
            resposta[len - 1] = '\0';
        }

        if (strcmp(resposta, "SIM") == 0) {
            return 1;
        } else if (strcmp(resposta, "NAO") == 0) {
            return 0;
        } else {
            printf("Entrada inválida. Tente novamente.\n");
        }
    }
}

int main() {
    int resultado = lerConfirmacao();

    if (resultado == 1) {
        printf("Você digitou SIM.\n");
    } else {
        printf("Você digitou NAO.\n");
    }

    return 0;
}
