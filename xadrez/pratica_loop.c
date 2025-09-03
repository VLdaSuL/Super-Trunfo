#include <stdio.h>
    int main (){
/*       int i =0;

        while(i <= 10) {

            if (i %2 == 0) 
            {
                printf("O numero %d é par!\n", i);
            }

            i++;
       }

        while(i <= 10) {

            if (i %2 != 0) 
            {
                printf("O numero %d é impar!\n", i);
            }
            
            i++;
        }
*/
/*        int numero;

        do {

            printf("\nDigite um numero par para sair do programa: ");
            scanf("%d", &numero);

            if (numero % 2 == 0) {
                printf("%d é par!\n", numero);
            } else {
                printf("%d é impar!\n", numero);
            }


        } while (numero % 2 != 0);

        printf("Você digitou um numero par, saindo do programa...\n\n");
*/
        int numero, i;

        printf("Digite um numero para calcularmos a tabuada: ");
        scanf("%d", &numero);

        for(i = 0; i <= 10; i++) 
        {
            printf("%d x %d = %d\n", i, numero, i * numero);
        }

    return 0;

    }