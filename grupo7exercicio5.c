#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTATOS 100
#define TAM_NOME 100

typedef struct {
    char nome[TAM_NOME];
} Contato;

void adicionarContato(Contato agenda[], int *totalContatos) {
    if (*totalContatos >= MAX_CONTATOS) {
        printf("Agenda cheia! Não é possível adicionar mais contatos.\n");
        return;
    }

    printf("Digite o nome: ");
    getchar(); 
    fgets(agenda[*totalContatos].nome, TAM_NOME, stdin);

    agenda[*totalContatos].nome[strcspn(agenda[*totalContatos].nome, "\n")] = '\0';

    (*totalContatos)++;
    printf("Contato adicionado com sucesso!\n");
}

void imprimirContato(Contato agenda[], int totalContatos) {
    char nomeBusca[TAM_NOME];
    int encontrado = 0;

    printf("Digite o nome a buscar: ");
    getchar(); 
    fgets(nomeBusca, TAM_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    for (int i = 0; i < totalContatos; i++) {
        if (strcasecmp(agenda[i].nome, nomeBusca) == 0) {
            printf("Contato encontrado: %s\n", agenda[i].nome);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void listarPorLetra(Contato agenda[], int totalContatos) {
    char letra;
    int encontrados = 0;

    printf("Digite a letra inicial: ");
    getchar();
    letra = getchar();
    letra = toupper(letra);

    printf("Contatos com a letra '%c':\n", letra);
    for (int i = 0; i < totalContatos; i++) {
        if (toupper(agenda[i].nome[0]) == letra) {
            printf("- %s\n", agenda[i].nome);
            encontrados = 1;
        }
    }

    if (!encontrados) {
        printf("Nenhum contato encontrado com essa letra.\n");
    }
}

int main() {
    Contato agenda[MAX_CONTATOS];
    int totalContatos = 0;
    int opcao;

    do {
        printf("\n--- MENU AGENDA ---\n");
        printf("1 - Adicionar novo contato\n");
        printf("2 - Buscar e imprimir contato\n");
        printf("3 - Listar contatos por letra\n");
        printf("4 - Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                adicionarContato(agenda, &totalContatos);
                break;
            case 2:
                imprimirContato(agenda, totalContatos);
                break;
            case 3:
                listarPorLetra(agenda, totalContatos);
                break;
            case 4:
                printf("Encerrando a agenda. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
