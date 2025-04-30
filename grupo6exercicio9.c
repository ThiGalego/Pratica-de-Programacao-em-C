#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NOMES 20
#define TAM_NOME 100

void getPrenome(char *completo, char *prenome) {
    sscanf(completo, "%s", prenome);
}

void getSobrenome(char *completo, char *sobrenome) {
    char *token = strtok(completo, " ");
    char ultimo[TAM_NOME];
    while (token != NULL) {
        strcpy(ultimo, token);
        token = strtok(NULL, " ");
    }
    strcpy(sobrenome, ultimo);
}

int contarLetras(char *nome) {
    int count = 0;
    for (int i = 0; nome[i] != '\0'; i++) {
        if (!isspace(nome[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char nomes[MAX_NOMES][TAM_NOME];
    int totalNomes = 0;

    printf("Digite até 20 nomes (pré-nome + sobrenome). Digite 'FIM' para encerrar:\n");
    while (totalNomes < MAX_NOMES) {
        char entrada[TAM_NOME];
        printf("Nome %d: ", totalNomes + 1);
        fgets(entrada, sizeof(entrada), stdin);

        entrada[strcspn(entrada, "\n")] = '\0';

        if (strcmp(entrada, "FIM") == 0) {
            break;
        }

        strcpy(nomes[totalNomes], entrada);
        totalNomes++;
    }

    char nomesPorPrenome[MAX_NOMES][TAM_NOME];
    char nomesPorSobrenome[MAX_NOMES][TAM_NOME];

    for (int i = 0; i < totalNomes; i++) {
        strcpy(nomesPorPrenome[i], nomes[i]);
        strcpy(nomesPorSobrenome[i], nomes[i]);
    }

    for (int i = 0; i < totalNomes - 1; i++) {
        for (int j = i + 1; j < totalNomes; j++) {
            char prenome1[TAM_NOME], prenome2[TAM_NOME];
            getPrenome(nomesPorPrenome[i], prenome1);
            getPrenome(nomesPorPrenome[j], prenome2);
            if (strcmp(prenome1, prenome2) > 0) {
                char temp[TAM_NOME];
                strcpy(temp, nomesPorPrenome[i]);
                strcpy(nomesPorPrenome[i], nomesPorPrenome[j]);
                strcpy(nomesPorPrenome[j], temp);
            }
        }
    }

    for (int i = 0; i < totalNomes - 1; i++) {
        for (int j = i + 1; j < totalNomes; j++) {
            char sobrenome1[TAM_NOME], sobrenome2[TAM_NOME];
            char temp1[TAM_NOME], temp2[TAM_NOME];
            strcpy(temp1, nomesPorSobrenome[i]);
            strcpy(temp2, nomesPorSobrenome[j]);
            getSobrenome(temp1, sobrenome1);
            getSobrenome(temp2, sobrenome2);
            if (strcmp(sobrenome1, sobrenome2) > 0) {
                char temp[TAM_NOME];
                strcpy(temp, nomesPorSobrenome[i]);
                strcpy(nomesPorSobrenome[i], nomesPorSobrenome[j]);
                strcpy(nomesPorSobrenome[j], temp);
            }
        }
    }

    printf("\nNomes em ordem alfabética de pré-nome:\n");
    for (int i = 0; i < totalNomes; i++) {
        printf("%s\n", nomesPorPrenome[i]);
    }

    printf("\nNomes em ordem alfabética de sobrenome:\n");
    for (int i = 0; i < totalNomes; i++) {
        printf("%s\n", nomesPorSobrenome[i]);
    }

    int totalLetras = 0;
    for (int i = 0; i < totalNomes; i++) {
        totalLetras += contarLetras(nomes[i]);
    }

    double media = (double)totalLetras / totalNomes;
    printf("\nMédia de letras por nome: %.2f\n", media);

    return 0;
}
