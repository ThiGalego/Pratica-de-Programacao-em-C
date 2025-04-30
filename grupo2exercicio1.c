#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("Lista de valores do %d até %d:\n", num1, num2);
        for (int i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else if (num1 > num2) {
        printf("Lista de valores do %d até %d (decrescente):\n", num2, num1);
        for (int i = num2; i >= num1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("Valores iguais.\n");
    }

    return 0;
}
