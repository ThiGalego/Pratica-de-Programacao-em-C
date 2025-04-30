#include <stdio.h>

int main() {
    double valores[10], temp;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
    }

    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9 - i; j++) {  
            if (valores[j] > valores[j + 1]) { 
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

    printf("\nValores ordenados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", valores[i]);
    }

    printf("\n");

    return 0;
}
