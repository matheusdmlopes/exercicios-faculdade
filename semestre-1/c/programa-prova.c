#include <stdio.h>

void solucao1()
{
    // soluçao de acordo com a proposta da questão
    int operacao;
    float imposto, valor;

    printf("1-Importação\n2-Exportação\nEscolha: ");
    scanf("%d", &operacao);

    if(operacao != 1 && operacao != 2) {
        printf("Selecione uma operacao valida"); // if opcional somente para verificação
        return;
    }
    printf("Digite o valor: ");
    scanf("%f", &valor);

    if(operacao == 1) {
        if(valor <= 4000) {
            imposto = valor * 0.09;
        } else {
            if(valor <= 8000) {
                imposto = valor * 0.14;
            } else {
                imposto = valor * 0.18;
            }
        }
    }

    if(operacao == 2) {
        if(valor <= 3000) {
            imposto = valor * 0.04;
        } else {
            if(valor <= 6000) {
                imposto = valor * 0.06;
            } else {
                imposto = valor * 0.08;
            }
        }
    }

    printf("O valor do imposto e: %.2f", imposto);

    return;
}

void solucao2()
{
    // solução alternativa com uso de else if
    int operacao;
    float imposto, valor;

    printf("1-Importação\n2-Exportação\nEscolha: ");
    scanf("%d", &operacao);

    if(operacao != 1 && operacao != 2) {
        printf("Selecione uma operacao valida");
        return;
    }

    printf("Digite o valor: ");
    scanf("%f", &valor);

    if(operacao == 1) {
        if(valor <= 4000) {
            imposto = valor * 0.09;
        } else if(valor <= 8000) {
            imposto = valor * 0.14;
        } else {
            imposto = valor * 0.18;
        }
    }

    if(operacao == 2) {
        if(valor <= 3000) {
            imposto = valor * 0.04;
        } else if(valor <= 6000) {
            imposto = valor * 0.06;
        } else {
            imposto = valor * 0.08;
        }
    }

    printf("O valor do imposto e: %.2f", imposto);

    return;

}

int main()
{
    int operacao;

    printf("Selecione solucao 1 ou 2: ");
    scanf("%d", &operacao);

    if(operacao == 1) {
        solucao1();
    } else if(operacao == 2) {
        solucao2();
    } else {
        printf("Operacao invalida");
    }

    return 0;
}
