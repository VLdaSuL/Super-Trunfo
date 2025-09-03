#include <stdio.h>

    int main (){

        int vetor[5] = {7, 14, 21, 28, 35};
        int soma = 0;

        //Calculando a soma dos dois elementos do vetor
        for (int i = 0; i < 5; i++) 
        {
            soma += vetor [i];
        }

        printf ("\n");
        printf ("A soma dos elementos do vetor é: %d\n", soma);


return 0;

    }