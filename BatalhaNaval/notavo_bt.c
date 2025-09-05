#include<stdio.h>
#define Linhas 10
#define Colunas 10

    int main(){

        //Matriz0 - limpa
        int Matriz0[Linhas][Colunas] = {         
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, };

        //Matriz1 - navios horizontais e verticais
        int Matriz1[Linhas][Colunas] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, };
        
        //Matriz2 - navios diagonais
        int Matriz2[Linhas][Colunas] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,2},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, }; 

        //Matriz3 - peças especiais
        int Matriz3[Linhas][Colunas] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,3},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}, };      

        //Matriz4 - Matriz1 + Matriz2  - Navios verticais, horizontais e diagonais  
        int Matriz4[Linhas][Colunas] = {};
        for (int i = 0; i < Linhas; i++) {         
            for (int j = 0; j < Colunas; j++) {              
                Matriz4[i][j] = Matriz1[i][j] + Matriz2[i][j];                                  
            } 
        }        
        
        //Matriz5 - Matriz0 + Matriz3 - Todas as peças
        int Matriz5[Linhas][Colunas] = {};
        for (int l = 0; l < Linhas; l++) {         
            for (int m = 0; m < Colunas; m++) {              
                Matriz5[l][m] = Matriz1[l][m] + Matriz2[l][m]+ Matriz3[l][m];                                  
            } 
        } 

        char Linha [11] = {'X','A','B','C','D','E','F','G','H','I','J'};

        int Coluna [10] = {1,2,3,4,5,6,7,8,9,10};
/*
        //Teste das matrizes
        printf("\nMatriz: \n");
        for (int n = 0; n < Linhas; n++) {
            printf("\n");
            for (int o = 0; o < Colunas; o++) {   
                printf("%d ", Matriz0[n][o]); }}                                               
                printf("\n\n\n");   
*/












        printf("\n\n");
        printf("TABULEIRO BATALHA NAVAL \n");
        printf("\n");
        
        //Indice horizontal
        for (int p = 0; p <= 10; p++) {
            printf ("%2c", Linha [p]); 
        }   printf("\n");

        for (int p = 0; p < 10; p++) {
            //Indice vertical
            printf("%2d", Coluna [p]);  
            
            for (int q = 0; q < 10; q++) { 
                //Entrada Matriz           
                printf (" %d", Matriz4[p][q]);
            }   printf("\n");  
        } printf("\n");      

    return 0;

    }
