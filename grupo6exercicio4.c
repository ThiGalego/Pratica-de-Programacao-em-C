#include <stdio.h>

int main() {
    char nome[100];
    char endereco[150];
    char telefone[30];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Digite seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') nome[i] = '\0';
    }
    for (int i = 0; endereco[i] != '\0'; i++) {
        if (endereco[i] == '\n') endereco[i] = '\0';
    }
    for (int i = 0; telefone[i] != '\0'; i++) {
        if (telefone[i] == '\n') telefone[i] = '\0';
    }

    printf("\nSeu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %s.\n",
           nome, idade, endereco, telefone);

    return 0;
}
