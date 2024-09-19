#include <stdio.h>

int main() {
    int opcao;
    float real, dolar, euro, resultado;

    printf("Escolha a opçao de conversao: 1- Dolar para real \n 2- Real para dolar \n 3- Euro para real \n 4- Real para euro")

    if(opcao == 1) {
        printf("Digite o valor atual do real: ")
        scanf("%f", &real);

        printf("Digite o valor em dolar que deseja converter para real")
        scanf("%f", &dolar)


        resultado=real*dolar
    }
}
