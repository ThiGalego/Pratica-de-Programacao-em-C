#include <stdio.h>

int main() {
    int num;

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    printf("Número em hexadecimal: %X\n", num); 
    printf("Número em octal: %o\n", num);      

    return 0;
}
