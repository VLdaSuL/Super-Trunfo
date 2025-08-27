#include <stdio.h>

    int main(){
        int mat1 [3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3,3}};
        int mat2 [3][3] = {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}};
        int matSoma [3][3];
        int matT1 [3][3];
        int matT2 [3][3];
        int matT3 [3][3];


        printf("\n");
        //Somando as duas matrizes
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matSoma[i][j] = mat1[i][j] + mat2[i][j]; //Novo valor para matSoma
                matT1[i][j] = matSoma[i][j] - mat2[i][j]; //Novo valor para matT1
                matT2[i][j] = mat1[i][j] + matSoma[i][j]; //matT2 recebeu valor cru de mat1(cosole) + matSoma
                matT3[i][j] = matT1[i][j] + matT2[i][j];
                
                //printf("matT3[%d][%d] =  %d\n", i, j, matT3[i][j]); 
                printf("mat1[%d][%d]", mat1[i][j]);               
            }
            printf("\n");
        }

 /*       
        printf("%d\n", mat1[i][j]);
        printf("\n");
        printf("%d\n", mat2[i][j]);
        printf("\n");
        printf("%d\n", matSoma[i][j]);
        printf("\n");
        printf("%d\n", matT1[i][j]);
        printf("\n");
        printf("%d\n", matT2[i][j]);
        printf("\n");
        printf("%d\n", matT3[i][j]);
        printf("\n");
*/
return 0;

    }