#include <stdio.h>

void analisar_vetor(int vetor[], int tamanho, float *media, int *menor, int *maior) {
    if (tamanho < 2) {
        printf("Erro: vetor deve ter pelo menos 2 elementos.\n");
        return;
    }

    int soma = 0;
    *menor = vetor[0];
    *maior = vetor[0];

    for (int i = 0; i < tamanho - 1; i++) { 
        soma += vetor[i];
        if (vetor[i] < *menor) *menor = vetor[i];
        if (vetor[i] > *maior) *maior = vetor[i];
    }

    *media = (float)soma / (tamanho - 1);
}

int main() {
    int numeros[] = {95, 10, 55, 60, 25, 21}; 
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    float media;
    int menor, maior;

    analisar_vetor(numeros, tamanho, &media, &menor, &maior);

    printf("Média: %.2f\n", media);
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}
