#include<stdio.h>
    int main(){

        int i, j, l;

        int tabuleiro[10][10] = {};

        printf("\n\n");
        printf("TABULEIRO BATALHA NAVAL \n");
        printf("\n");

        char letra ='A';
        for (int l = 0; l < 10; l++) 
        {
            printf (" %c", letra); 
            ++letra;
        }   printf("\n");

        for (int i = 1; i < 11; i++) 
        {
           
            printf("%2d", i);  //AJUSTE
            
            for (int j = 0; j < 10; j++)          
            {            
                printf (" %d", tabuleiro [j][i]);
            }   
            printf("\n");

        }       
        printf("\n");
  
        return 0;
    }
