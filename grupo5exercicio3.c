#include <stdio.h>

double calcular_media(double notas[5]) {
    double soma = 0.0;

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    return soma / 5.0;
}

int main() {
    double notas[5];

    printf("Digite as 5 notas do aluno:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }

    double media = calcular_media(notas);
    printf("A média do aluno é: %.2lf\n", media);

    return 0;
}
