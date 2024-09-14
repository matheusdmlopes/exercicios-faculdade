#include <stdio.h>

int main() {
    float valorCompra, desconto, porcentagem, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o valor do desconto, sem a porcentagem: ");
    scanf("%f", &porcentagem);

    desconto=valorCompra*(porcentagem/100);
    valorFinal=valorCompra-desconto;

    printf("O valor final da sua compra e: R$%.2f\n", valorFinal);
    printf("O valor do seu desconto foi de: R$%.2f", desconto);

    return 0;
}
