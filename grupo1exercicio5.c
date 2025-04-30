#include <stdio.h>
#include <math.h>  

int main() {
    double num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    double soma = num1 + num2;
    printf("A soma dos números é: %.2lf\n", soma);

    double produto = num1 * (num2 * num2);
    printf("O produto do primeiro número pelo quadrado do segundo é: %.2lf\n", produto);

    double quadrado_num1 = num1 * num1;
    printf("O quadrado do primeiro número é: %.2lf\n", quadrado_num1);

    double raiz_soma_quadrados = sqrt((num1 * num1) + (num2 * num2));
    printf("A raiz quadrada da soma dos quadrados é: %.2lf\n", raiz_soma_quadrados);

    double seno_diferenca = sin(num1 - num2);
    printf("O seno da diferença dos números é: %.2lf\n", seno_diferenca);

    return 0;
}
