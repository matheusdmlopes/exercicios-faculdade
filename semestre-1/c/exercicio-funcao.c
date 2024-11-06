#include <stdio.h>

float mediaPonderadaCalculo(float np1, float np2, float pim, float pesoNp1, float pesoNp2, float pesoPim)
{
    float media, pesoTotal;
    pesoTotal = pesoNp1 + pesoNp2 + pesoPim;
    if(pesoTotal != 10)
    {
        printf("A soma das medias deve ser igual a 10!\n");
        return -1;
    }
    media = ((np1 * pesoNp1) + (np2 * pesoNp2) + (pim * pesoPim)) / pesoTotal;
    return media;
}

int main()
{
    float np1, np2, pim, pesoNp1, pesoNp2, pesoPim, media;

    printf("Digite a NP1: ");
    scanf("%f", &np1);
    printf("Digite a NP2: ");
    scanf("%f", &np2);
    printf("Digite a nota do PIM: ");
    scanf("%f", &pim);
    printf("Digite o peso da NP1: ");
    scanf("%f", &pesoNp1);
    printf("Digite o peso da NP2: ");
    scanf("%f", &pesoNp2);
    printf("Digite o peso do PIM: ");
    scanf("%f", &pesoPim);

    media = mediaPonderadaCalculo(np1, np2, pim, pesoNp1, pesoNp2, pesoPim);

    if(media == -1)
    {
        printf("Encerrando a aplicacao.");
        return 0;
    }

    printf("A media e: %.2f", media);

    return 0;
}
