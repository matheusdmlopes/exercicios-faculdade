#include <stdio.h>
#include <string.h>

void exercicio1() {
    char palavra[10], palavraCopia[10];

    printf("Digite a palavra: ");

    // scanf("%s", &palavra);
    fgets(palavra, 10, stdin);

    strcpy(palavraCopia, palavra);

    printf("palavra digitada: %s\n", palavra);
    printf("palavra copia: %s", palavraCopia);
}

int main() {
    char nome[15], sobrenome[15], nomeCompleto[30];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, sobrenome);

    printf("Nome: %s", nome);
    printf("Sobrenome: %s", sobrenome);
    printf("Nome completo: %s", nomeCompleto);
}
