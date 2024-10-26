#include <stdio.h>

int main() {
    int numero, i, maiorNumero, menorNumero;

    i=1;
    menorNumero=0;
    maiorNumero=0;

    while(i <= 5) {
        printf("Digite o numero: ");
        scanf("%d", &numero);

        if (numero > maiorNumero) {
            maiorNumero=numero;
        }

        if(numero < menorNumero || menorNumero == 0) {
            menorNumero=numero;
        }

        i++;
    }

    printf("O maior numero e: %d\n", maiorNumero);
    printf("O menor numero e: %d\n", menorNumero);
}
