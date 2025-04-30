#include <stdio.h>

int calcular_razao(float numerador, float denominador, float *resultado) {
    if (denominador == 0) {
        return 0;
    }

    *resultado = numerador / denominador;
    return 1; 
}

int main() {
    float a, b, r;
    int status;

    printf("Digite o numerador: ");
    scanf("%f", &a);

    printf("Digite o denominador: ");
    scanf("%f", &b);

    status = calcular_razao(a, b, &r);

    if (status) {
        printf("Resultado da divisão: %.2f\n", r);
    } else {
        printf("Erro: divisão por zero não é permitida.\n");
    }

    return 0;
}
