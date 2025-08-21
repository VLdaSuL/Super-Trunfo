#include <stdio.h>

    int main (){

        int numero = 8888, resultado;

        resultado = numero % 2;
        //Teste simples para verificar numero par ou impar
        printf("A variável resultado é: %d\n", resultado);
        //Este comando imprime na tela o resto da variavel
        if (resultado == 0) {
            printf ("O número é par\n");
        }
        //Caso o comando if seja correspondido, a mensagem dentro das chaves será impressa
    return 0;

    }