#include <stdio.h>

    int main (){

        int numero = 8888, resultado;

        resultado = numero % 2;
        //Teste simples para verificar numero par ou impar
        printf("\n\n\nA variável resultado é: %d\n", resultado);
        //Este comando imprime na tela o resto da variavel
        if (resultado == 0) {
            printf ("O número é par\n\n\n");
        }
        //Caso o comando if seja correspondido, a mensagem dentro das chaves será impressa
    return 0;

    }