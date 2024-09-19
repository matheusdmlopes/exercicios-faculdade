#include <stdio.h>

int main() {
    int anoAtual, anoNascimento, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade=anoAtual-anoNascimento;

    if(idade >= 18) {
    printf("Voce e maior de idade! Sua idade e: %d", idade);
    } else {
    printf("Voce e menor de idade! sua idade e: %d", idade);
    }

    return 0;
}
