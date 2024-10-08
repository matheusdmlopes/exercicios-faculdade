#include <stdio.h>

void exercicio1() {
    int i;

    printf("Numeros pares de 2 a 100:\n");
    for(i=2; i<=100; i++) {
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
}

void exercicio2() {
    int i;

    printf("Numeros impares de 1 a 100:\n");
    for(i=1; i<=100; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}

// Os dois exercícios acima são possíveis de fazer de uma forma muito mais simples com o operador %, que retorna o resultado da divisão (0=par, 1=impar)

void exercicio3() {
    int i, n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("Tabuada do numero %d:\n", n);
    for(i=1; i<=10; i++) {
        printf("%d\n", n*i);
    }
}

int main() {
    int op;

    printf("Digite o numero do exercicio: ");
    scanf("%d", &op);

    if(op==1) {
        exercicio1();
    }

    if(op==2) {
        exercicio2();
    }

    if(op==3) {
        exercicio3();
    }

    return 0;
}
