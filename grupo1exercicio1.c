#include <stdio.h>
#include <stdlib.h>

int main(){
    int metros;
    
    printf("Digite o valor em Metros: ");
    scanf("%d",&metros);
    int dec = metros *10;
    int cen = metros *100;
    int mil = metros *1000;
    
    printf("O valor em decimetros: %d\n", dec);
    printf("O valor em centimetros: %d\n", cen);
    printf("O valor em milimetros: %d\n", mil);
    return 0;
}	