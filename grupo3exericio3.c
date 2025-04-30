#include <stdio.h>

double calcular_ex(double x) {
    double resultado = 1.0; 
    double termo = 1.0;      
    int n = 1;               
    
    while (termo > 1e-6 || termo < -1e-6) {
        termo *= x / n;  
        resultado += termo;  
        n++;                
    }
    
    return resultado;
}

int main() {
    double x;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    
    double resultado = calcular_ex(x);
    printf("Valor de e^%.2lf é: %.6lf\n", x, resultado);
    
    return 0;
}
