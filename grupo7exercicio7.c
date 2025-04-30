#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTATOS 100
#define TAM_NOME 100
#define TAM_TEL 20

typedef struct {
    char nome[TAM_NOME];
    char telefone[TAM_TEL];
} Contato;

Contato agenda[MAX_CONTATOS];
int totalContatos = 0;

void adicionarContato() {
    if (totalContatos >= MAX_CONTATOS) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("Digite o nome: ");
    getchar(); 
    fgets(agenda[totalContatos].nome, TAM_NOME, stdin);
    agenda[totalContatos].nome[strcspn(agenda[totalContatos].nome, "\n")] = '\0'; 

    printf("Digite o telefone: ");
    fgets(agenda[totalContatos].telefone, TAM_TEL, stdin);
    agenda[totalContatos].telefone[strcspn(agenda[totalContatos].telefone, "\n")] = '\0'; 

    totalContatos++;
    printf("Contato adicionado com sucesso!\n");
}

void consultarContato() {
    char busca[TAM_NOME];
    int encontrado = 0;

    printf("Digite o nome para buscar: ");
    getchar(); 
    fgets(busca, TAM_NOME, stdin);
    busca[strcspn(busca, "\n")] = '\0'; 

    for (int i = 0; i < totalContatos; i++) {
        if (strcmp(agenda[i].nome, busca) == 0) {
            printf("Nome: %s\nTelefone: %s\n", agenda[i].nome, agenda[i].telefone);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void listarPorLetra() {
    char letra;
    int encontrados = 0;

    printf("Digite a letra inicial: ");
    getchar(); 
    letra = getchar();
    letra = toupper(letra);

    printf("Contatos que começam com a letra '%c':\n", letra);
    for (int i = 0; i < totalContatos; i++) {
        if (toupper(agenda[i].nome[0]) == letra) {
            printf("- %s (%s)\n", agenda[i].nome, agenda[i].telefone);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum contato encontrado com essa letra.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n===== AGENDA ELETRÔNICA =====\n");
        printf("1 - Inserir nome na agenda\n");
        printf("2 - Consultar por nome\n");
        printf("3 - Listar nomes pela letra inicial\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                consultarContato();
                break;
            case 3:
                listarPorLetra();
                break;
            case 0:
                printf("Saindo da agenda.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
