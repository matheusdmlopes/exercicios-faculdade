#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Nota da prova 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media e: %.2f", media);

    return 0;
}
