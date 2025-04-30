#include <stdio.h>

int main() {
    double valor, maior, menor;

    printf("Digite o 1º valor: ");
    scanf("%lf", &valor);
    
    maior = menor = valor;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%lf", &valor);

        if (valor > maior) {
            maior = valor;
        }
        
        if (valor < menor) {
            menor = valor;
        }
    }

    printf("O maior valor lido foi: %.2lf\n", maior);
    printf("O menor valor lido foi: %.2lf\n", menor);

    return 0;
}
