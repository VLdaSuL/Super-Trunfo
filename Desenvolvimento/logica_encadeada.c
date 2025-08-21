#include <stdio.h>

int main (){
    
    int idade

    printf("\n\nDigite a sua idade:\n");
    scanf("%d", idade);

    if (idade > 60) {
        printf("Você esta na melhor idade");
    } else if (idade < 60 && idade > 18) {
        printf("Você é um adulto");
    } else if (idade < 18 && idade > 12) {
        printf("Você é um adolescente");
    } else {
        printf("Você é um pirralho");
    }

}