#include<stdio.h>
    int main(){


       
        int i, j, tabuleiro[4][4] = {};

        for(i = 0; i > 4; i++) {
            for(j = 0; j > 4; j++) {
                printf("Digite um valor %d %d", i, j);
                scanf("%d", &tabuleiro[i][j]);
            }
        }
/*
        printf("\n\n");
        printf("TABULEIRO BATALHA NAVAL \n");

        char letra = 'A';
        for (int l = 0; l < 4; l++) {     
            printf(" %c", letra);
            ++letra; }   printf("\n");

        for (i = 1; i < 4; i++) 
        {       
            printf("%2d", i);
            for (int j = 0; j < 4; j++)          
    
                printf (" %d", tabuleiro [i][j]);
              
            printf("\n");
                }       
        printf("\n");
*/
        return 0;
    }
