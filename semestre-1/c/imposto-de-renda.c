#include <stdio.h>

void solucao1() {
    float salarioAtual, imposto, salarioFinal;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 2259.20) {
        printf("Voce esta isento do imposto de renda. \nSeu salario final e o mesmo: R$%.2f", salarioAtual);
    } else if (salarioAtual > 2259.20 && salarioAtual <= 2826.65) {
        imposto = salarioAtual * 0.075;
        salarioFinal = salarioAtual - imposto + 169.44;
    } else if (salarioAtual > 2826.65 && salarioAtual <= 3751.05) {
        imposto = salarioAtual * 0.15;
        salarioFinal = salarioAtual - imposto + 381.44;
    } else if (salarioAtual > 3751.05 && salarioAtual <= 4664.68) {
        imposto = salarioAtual * 0.225;
        salarioFinal = salarioAtual - imposto + 662.77;
    } else if (salarioAtual > 4664.69) {
        imposto = salarioAtual * 0.275;
        salarioFinal = salarioAtual - imposto + 896;
    } else {
        printf("Erro na aplicacao");
    }

    if(salarioAtual > 2259.20) {
        printf("Imposto: R$%.2f\n", imposto);
        printf("Salario final: R$%.2f", salarioFinal);
    }
}

void solucao2() {
    float salarioAtual, imposto, salarioFinal;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual <= 2259.20) {
        printf("Voce esta isento do imposto de renda. \nSeu salario final e o mesmo: R$%.2f", salarioAtual);
    } else {
        if(salarioAtual <= 2826.65) {
            imposto = salarioAtual * 0.075;
            salarioFinal = salarioAtual - imposto + 169.44;
        } else {
            if(salarioAtual <= 3751.05) {
                imposto = salarioAtual * 0.15;
                salarioFinal = salarioAtual - imposto + 381.44;
            } else {
                if(salarioAtual <= 4664.68) {
                    imposto = salarioAtual * 0.225;
                    salarioFinal = salarioAtual - imposto + 662.77;
                } else {
                    imposto = salarioAtual * 0.275;
                    salarioFinal = salarioAtual - imposto + 896;
                }
            }
        }
    }

    if(salarioAtual > 2259.20) {
        printf("Imposto: R$%.2f\n", imposto);
        printf("Salario final: R$%.2f", salarioFinal);
    }

}

int main() {
    int escolha;

    printf("Escolha solucao 1 ou 2: ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        solucao1();
    } else if(escolha == 2) {
        solucao2();
    } else {
        printf("Escolha invalida.");
    }

    return 0;
}
