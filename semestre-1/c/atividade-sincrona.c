#include <stdio.h>

int main() {
    float altura, largura, valorMetroQuadrado, frete, area, valorFinal, valorParcial;

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &valorMetroQuadrado);

    area=altura*largura;

    valorParcial=area*valorMetroQuadrado;

    frete=valorParcial*0.08;

    valorFinal=valorParcial+frete;

    printf("O valor parcial do projeto e: R$%.2f", valorParcial);

    printf("O valor do frete do projeto e: R$%.2f", frete);

    printf("O valor final do projeto e: R$%.2f", valorFinal);

    return 0;
}