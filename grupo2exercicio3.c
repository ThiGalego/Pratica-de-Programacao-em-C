#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);


    if (preco < 100) {
        preco *= 1.10;  
    } else {
        preco *= 1.20;  
    }

    printf("O preço do produto com inflação é: R$ %.2f\n", preco);

    return 0;
}
