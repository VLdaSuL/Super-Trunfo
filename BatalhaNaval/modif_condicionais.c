#include <stdio.h>

    int main(){

        int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

        for (int i = 0; i < 3; i++) {           //Loop externo de linhas
            for (int j = 0; j < 3; j++) {       //Loop interno de colunas

                if(matriz[i][j] > 5) {

                    matriz[i][j] = -matriz[i][j]; //Se o elemento for maior que 5, torna-o negativo

                }
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }


return 0;

}