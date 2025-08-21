#include <stdio.h>

    int main(){
    /*
    programa que verifica se uma pessoa está qualificada para um
    desconto especial com base na idade e na renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
    uma renda mensal abaixo de 2000*/

    int idade;
    float renda;

    printf("\n\nDigite a sua idade: \n");
    scanf("%d", &idade);
    printf("\n\nDigite a sua renda: \n");
    scanf("%f", &renda);

    if (idade > 60 || idade < 18) {
        if (renda < 2000) {
            printf("\n\nVocê têm direito ao desconto! \n\n");
        } else {
            printf("\n\nVocê não tem direito ao desconto devido a tua renda!\n\n");
        } 
    } else {
            printf("\n\nVocê não têm direito ao desconto, devido a tua idade.\n\n");
    }

    }