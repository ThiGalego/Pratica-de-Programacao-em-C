#include <stdio.h>

int main() {
    float nota1, nota2, media;

    while (1) {  
        printf("Digite a nota da primeira prova (0 a 10): ");
        scanf("%f", &nota1);

        if (nota1 == 50) {
            break;
        }

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            continue; 
        }

        printf("Digite a nota da segunda prova (0 a 10): ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            continue;  
        }

        media = (nota1 + nota2) / 2;

        printf("A média das notas é: %.2f\n\n", media);
    }

    printf("Programa encerrado. A primeira nota digitada foi 50.\n");

    return 0;
}
