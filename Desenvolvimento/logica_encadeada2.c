#include <stdio.h>

    int main (){

        int nota;

        printf("\n\nDigite a sua nota: \n");
        scanf("%d", &nota);

        if (nota <= 45) {
            printf("Conceito E");
        } else if (nota <= 59) {
            printf("Conceito D");
        } else if (nota <= 69) {
            printf("Conceito")
        }
    }