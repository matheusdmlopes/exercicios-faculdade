#include <stdio.h>

void solucao1() {
    int opcao;
    float real, dolar, euro, cotacao;

    printf("Opcoes: 1- Dolar para real \n 2- Real para dolar \n 3- Euro para real \n 4- Real para euro\nEscolha: ");
    scanf("%d", &opcao);

    printf("Valor da cotacao (quanto 1 unidade da moeda da esquerda equivale a da direita): ");
    scanf("%f", &cotacao);

    if(opcao == 1) {
        printf("Digite o valor em dolar que deseja converter para real: ");
        scanf("%f", &dolar);

        real=dolar*cotacao;
        printf("Valor em real: %.2f", real);
    }

    if(opcao == 2) {
        printf("Digite o valor em Real que deseja converter para dolar: ");
        scanf("%f", &real);

        dolar=real*cotacao;
        printf("Valor em dolar: %.2f", dolar);
    }

    if(opcao == 3) {
        printf("Digite o valor em Euro que deseja converter para Real: ");
        scanf("%f", &euro);

        real=euro*cotacao;
        printf("Valor em real: %.2f", real);
    }

    if(opcao == 4) {
        printf("Digite o valor em Real que deseja converter para Euro: ");
        scanf("%f", &real);

        euro=real*cotacao;
        printf("Valor em real: %.2f", euro);
    }
    return 0;
}

// local > estrangeira = divisao
// estrangeira > local = multiplicacao

void solucao2() {
    int opcao;
    float real, dolar, euro, cotacao;

    printf("Opcoes: 1- Dolar para real \n 2- Real para dolar \n 3- Euro para real \n 4- Real para euro\nEscolha: ");
    scanf("%d", &opcao);

    printf("Valor da cotacao direta(quantas moedas locais precisam pra comprar 1 moeda estrangeira): ");
    scanf("%f", &cotacao);

    if(opcao == 1) {
        printf("Digite o valor em dolar que deseja converter para real: ");
        scanf("%f", &dolar);

        real=dolar*cotacao;
        printf("Valor em real: %.2f", real);
    }

    if(opcao == 2) {
        printf("Digite o valor em Real que deseja converter para dolar: ");
        scanf("%f", &real);

        dolar=real/cotacao;
        printf("Valor em dolar: %.2f", dolar);
    }

    if(opcao == 3) {
        printf("Digite o valor em Euro que deseja converter para Real: ");
        scanf("%f", &euro);

        real=euro*cotacao;
        printf("Valor em real: %.2f", real);
    }

    if(opcao == 4) {
        printf("Digite o valor em Real que deseja converter para Euro: ");
        scanf("%f", &real);

        euro=real/cotacao;
        printf("Valor em real: %.2f", euro);
    }
    return 0;
}

int main() {
    int escolha;

    printf("Escolha solucao 1 ou 2: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        solucao1();
    }
    if (escolha == 2) {
    solucao2();
    }
    return 0;
}


