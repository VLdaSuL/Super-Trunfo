#include<stdio.h>

    int main(){

        int i, j, l;

        int tabuleiro[10][10] = {
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {8,2,3,4,5,6,7,8,9,0} };

        char x [11] = {'X','A','B','C','D','E','F','G','H','I','J'};

        int y [10] = {1,2,3,4,5,6,7,8,9,10};

        printf("\n\n");
        printf("TABULEIRO BATALHA NAVAL \n");
        printf("\n");

        for (int l = 0; l <= 10; l++) 
        {
            printf (" %c", x [l]); 
        }   printf("\n");

        for (int i = 0; i < 10; i++) 
        {
           
            printf("%2d", y [i]);  //AJUSTE
            
            for (int j = 0; j < 10; j++)          
            {            
                printf (" %d", tabuleiro [j][i]);
            }   
            printf("\n");

        }       
        printf("\n");
  
        return 0;
    }
