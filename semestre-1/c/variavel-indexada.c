#include <stdio.h>

void arrayNumeros()
{
    int x[10];
    int i;

    for(i = 0; i <= 9; i++)
    {
        printf("Valor: ");
        scanf("%d", &x[i]);
    }

    printf("Os valores do array sao: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", x[i]);
    }
}

// Esta funçao arrayNomes é somente para curiosidade/teste.
void arrayNomes()
{
    char nomes[10][50];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o nome: ");
        scanf("%49s", &nomes[i]);
    }

    printf("Os nomes do array sao: \n");
    for(i=0;i<10;i++) {
        printf("nome: %s\n", nomes[i]);
    }
}

int main()
{
    int op;

    while (op < 1 || op > 2)
    {
        printf("Escolha uma opcao valida: \n");
        printf("1 - Exercicio array com numeros somente\n");
        printf("2 - Exercicio array com nomes\n");
        printf("Escolha: ");
        scanf("%d", &op);
    }

    if(op == 1)
    {
        arrayNumeros();
    }
    if(op == 2)
    {
        arrayNomes();
    }
}
