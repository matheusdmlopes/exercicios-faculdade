#include <stdio.h>

int main()
{
    float a, b;

    printf("Digite o valor a: ");
    scanf("%f", &a);

    printf("Digite o valor b: ");
    scanf("%f", &b);

    if(a == b) {
        printf("A e B sao iguais");
    } else {
        if(a < b) {
            printf("A e menor que B");
        } else {
            printf("A e maior que B");
        }
    }
}
