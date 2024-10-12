#include <stdio.h>


void exMediaGeral()
{
    int i;
    float acc, nota, mediaGeral;
    i=1;
    while(i<=3) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        acc= acc+nota;
        i++;
    }
    mediaGeral=acc/3;
    printf("Media geral da sala: %.2f", mediaGeral);
}

void exSalarios()
{
    int i, quantidadeMenor2k, quantidadeMaior5k;
    float acc, salario, media;

    // Inicialização das variáveis de contagem ou acumulo.
    i=1;
    acc=0;
    quantidadeMenor2k=0;
    quantidadeMaior5k=0;

    while(i<=3) {
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if(salario <= 2000) {
            quantidadeMenor2k++;
        }

        if (salario > 5000) {
            quantidadeMaior5k++;
        }

        acc=acc+salario;
        i++;
    }

    media=acc/3;

    printf("Salarios ate 2000 reais: %d\n", quantidadeMenor2k);
    printf("Salarios acima de 5000 reais: %d\n", quantidadeMaior5k);
    printf("Media salarial: %.2f", media);
}

void exMaiorEMenorNumero()
{
    int i, numero, maiorNumero, menorNumero;

    i=1;
    maiorNumero=0;
    menorNumero=0;

    while(i <= 5) {
        printf("Digite o numero: ");
        scanf("%d", &numero);

        if(numero > maiorNumero) {
            maiorNumero=numero;
        }
        if(menorNumero == 0 || numero < menorNumero) {
            menorNumero=numero;
        }

        i++;
    }
    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d", menorNumero);
}

int main()
{
    int op;

    while(op < 1 || op > 3) {
        printf("Exercicios:\n");
        printf("1 - Media da sala\n");
        printf("2 - Salarios\n");
        printf("3 - Maior e menor numero\n");
        printf("Escolha: ");
        scanf("%d", &op);
    }

    if(op == 1) {
        exMediaGeral();
    }
    if(op == 2) {
        exSalarios();
    }
    if(op == 3) {
        exMaiorEMenorNumero();
    }

    return 0;
}
