#include <stdio.h>

void preencherArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

int main() {
    int n;

    printf("Quantos valores você deseja inserir? ");
    scanf("%d", &n);

    double arr[n];

    preencherArray(arr, n);

    printf("Valores inseridos:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: %.2f\n", i + 1, arr[i]);
    }

    return 0;
}
