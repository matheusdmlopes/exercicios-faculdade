#include <stdio.h>

int main()
{
    int i, qntdAcimaDaMedia, qntdAbaixoDaMedia;
    float medias[5], mediaGeral, acc;

    i = 0;
    qntdAcimaDaMedia = 0;
    qntdAbaixoDaMedia = 0;
    acc = 0;

    for(i = 0; i <= 4; i++) {
        printf("Digite as medias: ");
        scanf("%f", &medias[i]);

        acc = acc + medias[i];
    }

    mediaGeral = acc / 5;

    for(i = 0; i <= 4; i++) {
        if(medias[i] < mediaGeral) {
            qntdAbaixoDaMedia++;
        }

        if(medias[i] > mediaGeral) {
            qntdAcimaDaMedia++;
        }
    }

    printf("Media geral da sala: %.2f\n", mediaGeral);
    printf("Quantidade de alunos acima da media: %d\n", qntdAcimaDaMedia);
    printf("Quantidade de alunos abaixo da media: %d\n", qntdAbaixoDaMedia);
}
