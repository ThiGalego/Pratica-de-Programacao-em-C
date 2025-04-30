#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, i;

    printf("Digite a tabuada desejada: ");
    scanf("%d", &numero);
    
    printf("Tabuada do: %d", numero);
    for( i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d\n", numero, i, numero * i);
    };

    return 0;
}	