#include <stdio.h>
#include <string.h>

#define TAM 20

typedef struct {
    char nome[80];
    float preco;
} PROD;

PROD lerProduto() {
    PROD p;
    printf("Digite o nome do produto: ");
    getchar(); 
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0'; 
    printf("Digite o preço: ");
    scanf("%f", &p.preco);

    return p;
}

void atualizarPreco(PROD *p) {
    if (p->preco < 100.0) {
        p->preco *= 1.05;
    }
}

void imprimirProduto(PROD p) {
    printf("Produto: %-20s | Preço: R$ %.2f\n", p.nome, p.preco);
}

void ordenarProdutos(PROD lista[], int n) {
    PROD temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(lista[i].nome, lista[j].nome) > 0) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

int main() {
    PROD produtos[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("\n--- Produto %d ---\n", i + 1);
        produtos[i] = lerProduto();
    }

    for (int i = 0; i < TAM; i++) {
        atualizarPreco(&produtos[i]);
    }

    ordenarProdutos(produtos, TAM);

    printf("\n--- Lista Final de Produtos ---\n");
    for (int i = 0; i < TAM; i++) {
        imprimirProduto(produtos[i]);
    }

    return 0;
}
