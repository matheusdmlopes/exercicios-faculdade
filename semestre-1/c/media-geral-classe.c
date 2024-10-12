#include <stdio.h>


void exMediaGeral() {
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

void exSalarios() {
    int i, quantidadeMenor2k, quantidadeMaior5k;
    float acc, salario, media;
    i=1;

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
    printf("Salarios ate 5000 reais: %d\n", quantidadeMaior5k);
    printf("Media salarial: %.2f", media);
}

int main() {
    int op;

    while(op < 1 || op > 2) {
        printf("Exercicios:\n");
        printf("1 - Media da sala\n");
        printf("2 - Salarios\n");
        printf("Escolha: ");
        scanf("%d", &op);
    }

    if(op == 1) {
        exMediaGeral();
    }
    if(op == 2) {
        exSalarios();
    }

    return 0;
}
