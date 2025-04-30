#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;
    double media;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; 
    }

    media = soma / 10.0;

    printf("\nA média dos valores é: %.2f\n", media);

    int encontrado = 0; 
    for (int i = 0; i < 10; i++) {
        if (valores[i] == media) {
            printf("O valor %d é igual à média.\n", valores[i]);
            encontrado = 1;
            break;  
        }
    }

    if (!encontrado) {
        printf("Nenhum valor é igual à média.\n");
    }

    return 0;
}
