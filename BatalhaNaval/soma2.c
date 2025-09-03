#include <stdio.h>

    int main(){
        int mat1 [3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3,3}};
        int mat2 [3][3] = {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}};
        int matSoma [3][3];

        printf("\n");
        //Somando as duas matrizes
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matSoma[i][j] = mat1[i][j] + mat2[i][j];
                
                
                printf("matSoma[%d][%d] =  %d\n", i, j, matSoma[i][j]);                
            }
            printf("\n");
        }
        

return 0;

    }