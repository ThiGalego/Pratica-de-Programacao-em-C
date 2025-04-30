#include <stdio.h>

int main() {
    float valor1, valor2, resultado;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            if (valor2 != 0) {
                resultado = valor1 / valor2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1;  
            }
            break;
        default:
            printf("Erro: Operador inválido!\n");
            return 1;  
    }

    printf("Resultado: %.2f %c %.2f = %.2f\n", valor1, operador, valor2, resultado);

    return 0;
}
