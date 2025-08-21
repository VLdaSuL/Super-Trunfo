#include <stdio.h>

int main (){
    
    int idade;

    printf("\n\nDigite a sua idade:\n");
    scanf("%d", &idade);

    if (idade > 60) {
        printf("\n\nVocê esta na melhor idade\n\n");
    } else if (idade < 60 && idade > 18) {
        printf("\n\nVocê é um adulto\n\n");
    } else if (idade < 18 && idade > 12) {
        printf("\n\nVocê é um adolescente\n\n");
    } else {
        printf("\n\nVocê é um pirralho\n\n");
    }

}