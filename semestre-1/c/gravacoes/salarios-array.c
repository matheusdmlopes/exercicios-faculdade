#include <stdio.h>

int main()
{
    int i, j, qntdAbaixoDaMedia, qntdAcimaDaMedia;
    float menorSalario, maiorSalario, mediaSalarial, salarios[5], acc;

    i = 0;
    qntdAbaixoDaMedia = 0;
    qntdAcimaDaMedia = 0;
    acc = 0;
    maiorSalario = 0;
    menorSalario = 0;
    j = 0;

    for(i = 0; i <= 4; i++) {
        printf("Digite os salarios: ");
        scanf("%f", &salarios[i]);

        acc = acc + salarios[i];
    }

    mediaSalarial = acc / 5;

    for(i = 0; i <= 4; i++) {
        if(salarios[i] < mediaSalarial) {
            qntdAbaixoDaMedia++;
        }

        if(salarios[i] > mediaSalarial) {
            qntdAcimaDaMedia++;
        }
    }

    for(i = 0; i <= 4; i++) {
        if(i == 0) {
            maiorSalario = salarios[i];
            menorSalario = salarios[i];
        }

        if(salarios[i] < menorSalario) {
            menorSalario = salarios[i];
        }

        if(salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }
    }

    float salariosAcimaDaMedia[qntdAcimaDaMedia];

    for(i = 0; i <= 4; i++) {
        if(salarios[i] > mediaSalarial) {
            salariosAcimaDaMedia[j] = salarios[i];
            j++;
        }
    }

    printf("Media salarial: %.2fR$\n", mediaSalarial);
    printf("Quantidade de salarios acima da media: %d\n", qntdAcimaDaMedia);
    printf("Quantidade de salarios abaixo da media: %d\n", qntdAbaixoDaMedia);
    printf("Maior salario: %.2fR$\n", maiorSalario);
    printf("Menor salario: %.2fR$\n", menorSalario);
    printf("Salarios acima da media:\n");

    for(i = 0; i < qntdAcimaDaMedia; i++) {
        printf("Salario: %.2fR$\n", salariosAcimaDaMedia[i]);
    }
}
