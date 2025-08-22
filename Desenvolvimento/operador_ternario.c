#include <stdio.h>

    int main(){
        int idade = 45;
        int resultado;
        int temperatura = 20;
       
/*

        //ondição ? verdadeiro : falso
        printf("\nResultado no modelo 1:\n");

        idade >= 18 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");

        
        printf("\nResultado no modelo 2:\n");  

        resultado = idade >= 18 ? 1 : 0;
        if (resultado == 1) {
            printf("Você é maior de idade!\n");
        } else {
            printf("Você é menor de idade!\n");

        }

        temperatura <= 19 ? printf("Sim, hoje esta muito frio!\n") : printf("Sim, hoje esta muito calor!");

*/

    //Exeplo 3 
    int num1 = 990;
    int num2 = 60;
    int maior;

    printf("\nResultado formato 1:\n");
    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O numero maior é: %d\n", maior);

    
    printf("\nResultado formato 2:\n");    
    if (num1 > num2) {
        printf("O número maior é: %d\n", num1);
    } else {
        printf("O numero maior é: %d\n", num2);
    }

    return 0;

    }