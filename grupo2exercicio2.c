#include <stdio.h>

int main() {
    printf("Tabela ASCII (códigos de 0 a 127):\n");
    printf("Código Decimal | Código Hexadecimal | Caracter\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%-15d | %-18X | ", i, i); 
        if (i >= 32 && i <= 126) { 
            printf("%c", i);
        } else {
            printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
