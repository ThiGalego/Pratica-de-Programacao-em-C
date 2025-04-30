#include <stdio.h>

double potencia(double x, int n) {
    double resultado = 1.0;
    
    if (n < 0) {
        x = 1.0 / x; 
        n = -n; 
    }
    
    for (int i = 0; i < n; i++) {
        resultado *= x;
    }
    
    return resultado;
}

int main() {
    double x;
    int n;
    
    printf("Digite o valor de x (base): ");
    scanf("%lf", &x);
    printf("Digite o valor de n (expoente): ");
    scanf("%d", &n);
    
    printf("Resultado: %.2lf\n", potencia(x, n));
    
    return 0;
}
