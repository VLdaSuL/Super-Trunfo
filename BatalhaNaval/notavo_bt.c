#include<stdio.h>

    int main(){

        //Matriz0 - limpa
        //Matriz1 - navios horizontais e verticais
        //Matriz2 - navios diagonais
        //Matriz3 - peças especiais
        //Matriz4 - Matriz0 + Matriz1
        //Matriz5 - Matriz0 + Matriz1 + Matriz2
        //Matriz6 - Matriz0 + Matriz3
        //Matriz7 - Matriz0 + Matriz1 + Matriz2 + Matriz3


        int i, j;

        int Matriz0[10][10] = {
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

        int Matriz1[10][10] = {
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
        
 

        char Linha [11] = {'X','A','B','C','D','E','F','G','H','I','J'};

        int Coluna [10] = {1,2,3,4,5,6,7,8,9,10};

        printf("\n\n");
        printf("TABULEIRO BATALHA NAVAL \n");
        printf("\n");
        
        //Indice horizontal
        for (int i = 0; i <= 10; i++) {
            printf (" %c", Linha [i]); 
        }   printf("\n");

        for (int i = 0; i < 10; i++) {
            //Indice vertical
            printf("%2d", Coluna [i]);  
            
            for (int j = 0; j < 10; j++) { 
                //Entrada Matriz           
                printf (" %d", Matriz0 [j][i]);
            }   printf("\n");  
        } printf("\n");      
  
    return 0;

    }
