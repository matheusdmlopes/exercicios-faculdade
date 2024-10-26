#include <stdio.h>

int main()
{
    float nota, mediaGeral, acc;
    int i;

    i = 1;
    acc = 0;

    while(i <= 5) {
        printf("Digite a nota: ");
        scanf("%f", &nota);

        acc = acc + nota;

        i++;
    }

    mediaGeral = acc / 5;

    printf("Media geral da sala: %.2f", mediaGeral);
}
