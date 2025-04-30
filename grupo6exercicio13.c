#include <stdio.h>
#include <string.h>
#include <math.h>

int conv2dec(const char* num_str, int base) {
    int decimal_value = 0;
    int length = strlen(num_str);
    
    for (int i = 0; i < length; i++) {
        char digit = num_str[length - i - 1]; 
        
        int digit_value;
        if ('0' <= digit && digit <= '9') {
            digit_value = digit - '0'; 
        } else if ('A' <= digit && digit <= 'F') {
            digit_value = digit - 'A' + 10; 
        } else if ('a' <= digit && digit <= 'f') {
            digit_value = digit - 'a' + 10; 
        } else {
            printf("Caractere inválido para a base %d: %c\n", base, digit);
            return -1; 
        }

        if (digit_value >= base) {
            printf("Dígito %c não é válido para a base %d\n", digit, base);
            return -1; 
        }

        decimal_value += digit_value * pow(base, i);
    }

    return decimal_value;
}

int main() {
    char num_str[100];
    int base;

    printf("Digite um número (como string): ");
    fgets(num_str, sizeof(num_str), stdin);

    int len = strlen(num_str);
    if (num_str[len - 1] == '\n') {
        num_str[len - 1] = '\0';
    }

    printf("Digite a base do número: ");
    scanf("%d", &base);

    int decimal = conv2dec(num_str, base);
    
    if (decimal != -1) {
        printf("O número %s na base %d é igual a %d em decimal.\n", num_str, base, decimal);
    }

    return 0;
}
