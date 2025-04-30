#include <stdio.h>

int main() {
    float matriz[5][3];
    float soma_colunas_pares = 0.0, soma_linhas_impares = 0.0;
    int count_colunas_pares = 0, count_linhas_impares = 0;

    printf("Digite os valores para a matriz 5x3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (j % 2 == 0) { // Colunas pares (0 e 2)
                soma_colunas_pares += matriz[i][j];
                count_colunas_pares++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) { 
            for (int j = 0; j < 3; j++) {
                soma_linhas_impares += matriz[i][j];
                count_linhas_impares++;
            }
        }
    }

    float media_colunas_pares = soma_colunas_pares / count_colunas_pares;
    float media_linhas_impares = soma_linhas_impares / count_linhas_impares;

    float diferenca = media_colunas_pares - media_linhas_impares;

    printf("\nMédia das colunas pares: %.2f\n", media_colunas_pares);
    printf("Média das linhas ímpares: %.2f\n", media_linhas_impares);
    printf("Diferença entre as médias: %.2f\n", diferenca);

    return 0;
}
