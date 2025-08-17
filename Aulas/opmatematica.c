#include <stdio.h>

int main (){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o numero 1: \n");
    scanf("%d", &numero1);
    printf("Digite o numero 2: \n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtracao = numero1 - numero2;

    //operação multipliação
    multiplicacao = numero1 * numero2;

    //operação divisão
    divisao = numero1 / numero2;

    //Resultado das operações
    printf("Resultado da soma é: %d\n", soma);
    printf("Resultado da subtração é: %d\n", subtracao);
    printf("Resultado da multiplicação é: %d\n", multiplicacao);
    printf("Resultado da divisão é: %d\n", divisao);

    return 0;

}