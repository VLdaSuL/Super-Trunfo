#include <stdio.h>

    int main (){

        int nota;

        printf("\n\nDigite a sua nota: \n");
        scanf("%d", &nota);

        if (nota <= 45) {
            printf("\n\nConceito E\n\n");
        } else if (nota <= 59) {
            printf("\n\nConceito D\n\n");
        } else if (nota <= 69) {
            printf("\n\nConceito C\n\n");
        } else if (nota <= 89) {
            printf("\n\nConceito B\n\n");
        } else {
            printf("\n\nConceito A\n\n");
        }
    }