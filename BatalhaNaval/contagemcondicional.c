#include <stdio.h>

    int main(){

        int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
        int eventCount = 0, oddCount = 0;

        for (int i = 0; i < 3; i++) {           //Loop externo de linhas
            for (int j = 0; j < 3; j++) {       //Loop interno de colunas

                if (matriz [i][j] % 2 == 0) {
                    eventCount++;               //Incrementa contadores de pares
                } else {
                    oddCount++;                 //Incrementa contadores de ímpares
                }
            }
        }
        //Impressão dos resultados



        printf("\n\n\n");
        printf("Números de elementos pares: %d\n", eventCount);
        printf("Número de elementos ímpares: %d\n", oddCount);



return 0;

}