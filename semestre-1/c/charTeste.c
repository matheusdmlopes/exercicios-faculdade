#include <stdio.h>
#include <string.h>

void teste1() {
    char nome1[10];
    char nome2[15];

    char nome[30];
    char sobrenome[21];

    strcpy(nome1, "Matheus");
    strcpy(nome2, "Rogerio Ceni");

    strcpy(nome, "Matheus ");
    strcpy(sobrenome, "De Marco Lopes");

    strcat(nome, sobrenome);

    printf("%s\n", nome1);
    printf("%s\n", nome2);

    printf("%s\n", nome);

    if(strcmp(nome, "Matheus De Marco Lopes") == 0) {
        printf("O nome esta correto!");
    } else {
        printf("O nome esta incorreto!");
    }
}

void teste2() {
    char nome[10];

    // scanf("%s", nome);
    fgets(nome, 10, stdin);
    printf("%s", nome);


}

int main() {
    teste1();
}
