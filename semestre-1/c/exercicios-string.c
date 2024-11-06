#include <stdio.h>
#include <string.h>

void exercicio1() {
    char var1[20], var2[20];

    printf("Digite a palavra: ");
    fgets(var1, sizeof(var1), stdin);

    strcpy(var2, var1);

    printf("Valor do var1: %s", var1);
    printf("Valor do var2: %s", var2);
}

void exercicio2() {
    char nome[30], sobrenome[30], nomeCompleto[61];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, sobrenome);

    printf("Nome digitado: %s", nome);
    printf("Sobrenome digitado: %s", sobrenome);
    printf("Nome completo: %s", nomeCompleto);
}

void exercicio3() {
    char senha[20], senhaDigitada[20];

    strcpy(senha, "Rogerio Ceni");

    printf("Digite a senha do programa: ");
    fgets(senhaDigitada, sizeof(senhaDigitada), stdin);

    printf("Senha do programa: %s\n", senha);
    printf("Senha digitada: %s\n", senhaDigitada);

    if(strcmp(senhaDigitada, "Rogerio Ceni\n") == 0) {
        printf("Acesso autorizado\n");
    } else {
        printf("Acesso negado");
    }
}

int main() {
    int op;

    printf("Escolha um exercicio: \n");
    while(op < 1 || op > 3) {
        printf("1- Copia de caractere\n");
        printf("2- Nome e sobrenome\n");
        printf("3- Validacao de senha\n");
        printf("Escolha: ");
        scanf("%d", &op);
        getchar();
    }

    if(op == 1) {
        exercicio1();
    }
    if(op == 2) {
        exercicio2();
    }
    if(op == 3) {
        exercicio3();
    }
    return 0;
}
