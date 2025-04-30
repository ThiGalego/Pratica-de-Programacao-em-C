#include <stdio.h>

void lerNotas(float *nota1, float *nota2, float *nota3) {
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", nota3);
}

int main() {
    float n1, n2, n3;

    lerNotas(&n1, &n2, &n3);

    printf("Notas digitadas:\n");
    printf("Nota 1: %.2f\n", n1);
    printf("Nota 2: %.2f\n", n2);
    printf("Nota 3: %.2f\n", n3);

    return 0;
}
