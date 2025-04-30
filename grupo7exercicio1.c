#include <stdio.h>

void operacoes(int a, int b, int *soma, int *diferenca, int *produto) {
    *soma = a + b;
    *diferenca = a - b;
    *produto = a * b;
}

int main() {
    int num1, num2;
    int soma, diferenca, produto;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    operacoes(num1, num2, &soma, &diferenca, &produto);

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);

    return 0;
}
