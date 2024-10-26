#include <stdio.h>

int main()
{
    int i, salarioMenor2k, salarioMaior5k;
    float salario, mediaSalarial, acc;

    i=1;
    salarioMenor2k=0;
    salarioMaior5k=0;
    acc=0;


    while(i <= 5) {
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if(salario <= 2000) {
            salarioMenor2k++;
        }

        if(salario > 5000) {
            salarioMaior5k++;
        }

        acc= acc+salario;

        i++;
    }

    mediaSalarial=acc/5;

    printf("Quantidade de salarios ate 2 mil reais: %d\n", salarioMenor2k);
    printf("Quantidade de salarios acima de 5 mil reais: %d\n", salarioMaior5k);
    printf("Media salarial: %.2f", mediaSalarial);
}
