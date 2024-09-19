#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Valor da nota 1: ");
    scanf("%f", &nota1);
    printf("Valor da nota 2: ");
    scanf("%f", &nota2);

    media=(nota1+nota2)/2;

    //if(media < 4) {
     //   printf("Reprovado, sua media e: %.2f", media);
   // } else {
       // if(media < 7) {
         //   printf("Exame, sua media e: %.2f", media);
       // } else {
        //    printf("Aprovado, sua media e: %.2f", media);
      //  }
    //}

    if (media < 4) {
        printf("Reprovado, sua media e: %.2f", media);
    } else if (media >= 4 && media < 7) {
        printf("Exame, sua media e: %.2f", media);
    } else {
        printf("Aprovado, sua media e: %.2f", media);
    }

    return 0;
}
