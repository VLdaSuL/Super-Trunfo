#include <stdio.h>

    int main(){

        int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

        for (int i = 0; i < 3; i++) {           //Loop externo de linhas
            for (int j = 0; j < 3; j++) {       //Loop interno de colunas

                if(matriz[i][j] %3 == 0) {

                    matriz[i][j] = -1; //Substitui múltiplos de 3 por -1

                }
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }


return 0;

}