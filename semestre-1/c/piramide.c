#include <stdio.h>

int main()
{
    float base, altura, resultado;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    resultado = (base * altura) / 2;

    printf("Area da piramide: %f", resultado);

    return 0;
}
