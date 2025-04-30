#include <stdio.h>

int main() {
    double fah, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fah);  

    celsius = (fah - 32.0) * (5.0 / 9.0);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fah, celsius);

    return 0;
}
