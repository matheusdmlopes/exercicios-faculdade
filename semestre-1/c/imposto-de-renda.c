#include <stdio.h>

void solucao1() {
    float salarioAtual, imposto, salarioFinal;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 2259.20) {
        printf("Voce esta isento do imposto de renda. Seu salario final e o mesmo: %.2f", salarioAtual);
    } else if (salarioAtual > 2259.20 && salarioAtual <= 2826.65) {
        imposto = salarioAtual * 0.075;
        salarioFinal = salarioAtual - imposto + 169.44;
        printf("7.5 porcento de imposto: R$ %.2f\nSalario final: R$ %.2f", imposto, salarioFinal);
    } else if (salarioAtual > 2826.65 && salarioAtual <= 3751.05) {
        imposto = salarioAtual * 0.15;
        salarioFinal = salarioAtual - imposto + 381.44;
        printf("15 porcento de imposto: R$ %.2f\nSalario final: R$ %.2f", imposto, salarioFinal);
    } else if (salarioAtual > 3751.05 && salarioAtual <= 4664.68) {
        imposto = salarioAtual * 0.225;
        salarioFinal = salarioAtual - imposto + 662.77;
        printf("22.5 porcento de imposto: R$ %.2f\nSalario final: R$ %.2f", imposto, salarioFinal);
    } else if (salarioAtual > 4664.69) {
        imposto = salarioAtual * 0.275;
        salarioFinal = salarioAtual - imposto + 896;
        printf("27.5 porcento de imposto: R$ %.2f\nSalario final: R$ %.2f", imposto, salarioFinal);
    } else {
        printf("Erro na aplicacao");
    }

    printf("Imposto: R$%.2f\n", imposto);
    printf("Salario final: R$%.2f", salarioFinal);

    return 0;
}

int main() {
    solucao1();
}
