#include <stdio.h>

long long fatorial_iterativo(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i; 
    }
    return resultado;
}

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        printf("Fatorial de %d = %lld\n", n, fatorial_iterativo(n));
    }

    return 0;
}
