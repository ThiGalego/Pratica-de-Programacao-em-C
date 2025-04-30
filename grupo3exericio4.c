#include <stdio.h>

int mostrar_opcoes_pagamento() {
    int opcao;

    printf("Escolha a forma de pagamento:\n");
    printf("1. À vista com 10%% de desconto\n");
    printf("2. Em 2 vezes (preço da etiqueta)\n");
    printf("3. De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00)\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

void pagamento_avista(double total) {
    double total_com_desconto = total - (total * 0.10);
    printf("Pagamento à vista com 10%% de desconto: R$ %.2lf\n", total_com_desconto);
}

void pagamento_duas_vezes(double total) {
    printf("Pagamento em 2 vezes: R$ %.2lf em duas parcelas de R$ %.2lf\n", total, total / 2);
}

void pagamento_parcelado(double total) {
    int num_parcelas;
    double juros = 0.03; 
    double total_com_juros, parcela;

    printf("Digite o número de parcelas (de 3 a 10): ");
    scanf("%d", &num_parcelas);

    if (num_parcelas < 3 || num_parcelas > 10) {
        printf("Número de parcelas inválido. Deve ser entre 3 e 10.\n");
        return;
    }

    if (total > 100.00) {
        total_com_juros = total * (1 + juros * num_parcelas);
        parcela = total_com_juros / num_parcelas;
        printf("Pagamento em %d vezes com 3%% de juros ao mês: R$ %.2lf\n", num_parcelas, total_com_juros);
        printf("Cada parcela será de R$ %.2lf\n", parcela);
    } else {
        printf("Compra abaixo de R$ 100,00 não pode ser parcelada.\n");
    }
}

int main() {
    double total_gasto;
    int opcao;

    printf("Digite o total gasto na loja: R$ ");
    scanf("%lf", &total_gasto);

    opcao = mostrar_opcoes_pagamento();

    switch (opcao) {
        case 1:
            pagamento_avista(total_gasto);
            break;
        case 2:
            pagamento_duas_vezes(total_gasto);
            break;
        case 3:
            pagamento_parcelado(total_gasto);
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
