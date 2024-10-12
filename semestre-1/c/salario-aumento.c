#include <stdio.h>

int main()
{
    float salarioAtual, aumento, porcentagem, salarioFinal;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o seu aumento, sem a porcentagem: ");
    scanf("%f", &porcentagem);


    aumento = salarioAtual * (porcentagem / 100);

    salarioFinal = salarioAtual + aumento;

    printf("Seu salario final e: R$%.2f\n", salarioFinal);
    printf("Seu aumento foi de: R$%.2f", aumento);
    return 0;
}
