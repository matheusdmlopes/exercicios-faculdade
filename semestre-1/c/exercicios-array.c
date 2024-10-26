#include <stdio.h>

void exercicio1()
{
    int i, acimaDaMedia, abaixoDaMedia;
    float mediaGeral, acc, medias[5];

    acc = 0;
    acimaDaMedia = 0;
    abaixoDaMedia = 0;

    for(i = 0; i <= 4; i++) {
        printf("Insira as medias: ");
        scanf("%f", &medias[i]);

        acc = acc + medias[i];
    }

    mediaGeral = acc / 5;

    for(i = 0; i <= 4; i++) {
        if(medias[i] < mediaGeral) {
            abaixoDaMedia++;
        }
        if(medias[i] > mediaGeral) {
            acimaDaMedia++;
        }
    }

    printf("Media geral da sala: %.2f\n", mediaGeral);
    printf("Alunos acima da media: %d\n", acimaDaMedia);
    printf("Alunos abaixo da media: %d\n", abaixoDaMedia);
}

void exercicio2()
{
    int i = 0, j = 0, qntdAcimaDaMedia = 0, qntdAbaixoDaMedia = 0;
    float salarios[5], mediaSalarial, maiorSalario, menorSalario, acc;

    maiorSalario = 0;
    menorSalario = 0;
    mediaSalarial = 0;
    acc = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite os salarios: ");
        scanf("%f", &salarios[i]);

        acc = acc + salarios[i];
    }

    mediaSalarial = acc / 5;

    for(i = 0; i < 5; i++) {
        if(salarios[i] < mediaSalarial) {
            qntdAbaixoDaMedia++;
        }
        if(salarios[i] > mediaSalarial) {
            qntdAcimaDaMedia++;
        }
    }



    for(i = 0; i < 5; i++) {
        if(i == 0) {
            maiorSalario = salarios[i];
            menorSalario = salarios[i];
        }

        if(salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }

        if(salarios[i] < menorSalario) {
            menorSalario = salarios[i];
        }
    }

    float salariosAcimaDaMedia[qntdAcimaDaMedia];

    for(i = 0; i < 5; i++) {
        if(salarios[i] > mediaSalarial) {
            salariosAcimaDaMedia[j] = salarios[i];
            j++;
        }
    }


    printf("A media salarial e: %.2fR$\n", mediaSalarial);
    printf("Quantidade de salarios acima da media: %d\n", qntdAcimaDaMedia);
    printf("Quantidade de salarios abaixo da media: %d\n", qntdAbaixoDaMedia);
    printf("O menor salario da lista e: %.2fR$\n", menorSalario);
    printf("O maior salario da lista e: %.2fR$\n", maiorSalario);
    printf("Salarios acima da media:\n");
    for(i = 0; i < qntdAcimaDaMedia; i++) {
        printf("%.2fR$\n", salariosAcimaDaMedia[i]);
    }

}

int main()
{
    int op;

    while(op < 1 || op > 2) {
        printf("Exercicio 1\n");
        printf("Exercicio 2\n");
        printf("Escolha o exercicio: ");
        scanf("%d", &op);
    }

    if(op == 1) {
        exercicio1();
    }
    if(op == 2) {
        exercicio2();
    }
    return 0;
}
