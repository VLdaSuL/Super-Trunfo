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
        {0,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,2,0,0,0,0,0},
        {0,0,0,0,2,0,0,0,0,0},
        {0,0,0,0,2,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,2,0},
        {0,0,0,0,0,0,0,0,2,0},
        {0,0,0,0,0,0,0,0,2,0}, };
        
        //Matriz2 - navios diagonais
        int Matriz2[Linhas][Colunas] = {
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,3,0},
        {0,0,0,0,0,0,0,0,0,3},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0}, }; 

        //Matriz3 - peças especiais cone, cruz e octaedro
        int Matriz3[Linhas][Colunas] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,5,0,0},
        {0,6,0,0,0,0,0,5,0,0},
        {6,6,6,0,0,5,5,5,5,5},
        {0,6,0,0,0,0,0,5,0,0},
        {0,0,0,0,0,0,0,5,0,0},
        {0,0,0,0,4,0,0,0,0,0},
        {0,0,0,4,4,4,0,0,0,0},
        {0,0,4,4,4,4,4,0,0,0}, };      

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

        int jogadas;

        printf("\n\n");
        printf("Tabuleiros: \n");
        printf("1. Instruções:\n");
        printf("2. Tabuleiro vazio:\n");
        printf("3. Navios verticais e horizontais:\n");
        printf("4. Navios na diagonais:\n");
        printf("5. Todos os navios:\n");
        printf("6. Peças especiais no tabuleiro:\n");
        printf("7. Todas as peças no tabuleiro:\n");
        printf("8. Sair do Jogo.\n\n");

            printf("Digite uma opção:\n");
            scanf("%d", &jogadas);

            switch (jogadas) 
            {
            //Entrando com as informações do movimento das peças    
                case 1:
                printf("\n");
                printf("Leitura das peças no tabuleiro.\n");
                printf("Opção 2, apresentação do tabuleiro vazio, onde o numero 0, representa a água.\n");
                printf("Opção 3, numeros 1 para navios horizontais e 2 os navios na vertical.\n");
                printf("Opção 4, numeros 3 simbolizando os navios da diagonal.\n");
                printf("Opção 5, Tabuleiro com 6 navios, na horizontal, na vertical e na diagoanl.\n");
                printf("Opção 6, Peças especiais, numeros 4 para cone, 5 para cruz e o 6 para o octaedro.\n");               
                printf("Opção 7, Todas as 9 peças no tabuleiro.\n");
                printf("Opção 8, Sair do Jogo.\n");
                break;
            //Tabuleiro vazio
                case 2:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("--- Tabuleiro vazio ---\n\n");       
            //Indice horizontal
                for (int p = 0; p <= 10; p++) {
                    printf ("%2c", Linha [p]); 
                }   printf("\n");
                for (int p = 0; p < 10; p++) {
            //Indice vertical
                    printf("%2d", Coluna [p]);              
                    for (int q = 0; q < 10; q++) { 
            //Entrada Matriz           
                        printf (" %d", Matriz0[p][q]); 
                    }   printf("\n");  
                }       printf("\n");            
                break;
            //Tabuleiro com navios na vertical e horizontal
                case 3:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("Navios na vertical e na horizontal\n\n");       
            //Indice horizontal
                for (int p = 0; p <= 10; p++) {
                    printf ("%2c", Linha [p]); 
                }   printf("\n");
                for (int p = 0; p < 10; p++) {
            //Indice vertical
                    printf("%2d", Coluna [p]);              
                    for (int q = 0; q < 10; q++) { 
            //Entrada Matriz           
                        printf (" %d", Matriz1[p][q]); 
                    }   printf("\n");  
                }       printf("\n");            
                break;
            //Tabuleiro com navios na diagonal
                case 4:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("-- Navios na diagonal --\n\n");       
            //Indice horizontal
                for (int p = 0; p <= 10; p++) {
                    printf ("%2c", Linha [p]); 
                }   printf("\n");
                for (int p = 0; p < 10; p++) {
            //Indice vertical
                    printf("%2d", Coluna [p]);              
                    for (int q = 0; q < 10; q++) { 
            //Entrada Matriz           
                        printf (" %d", Matriz2[p][q]); 
                    }   printf("\n");  
                }       printf("\n");            
                break;
            //Tabuleiro com todos os navios
                case 5:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("--- Todos os navios ---\n\n");       
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
                }       printf("\n");            
                break; 
            //Tabuleiro com peças especiais
                case 6:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("--- Peças especiais ---\n\n");       
            //Indice horizontal
                for (int p = 0; p <= 10; p++) {
                    printf ("%2c", Linha [p]); 
                }   printf("\n");
                for (int p = 0; p < 10; p++) {
            //Indice vertical
                    printf("%2d", Coluna [p]);              
                    for (int q = 0; q < 10; q++) { 
            //Entrada Matriz           
                        printf (" %d", Matriz3[p][q]); 
                    }   printf("\n");  
                }       printf("\n");            
                break;  
            //Tabuleiro com todas as peças
                case 7:
                printf("\n\n");
                printf("TABULEIRO BATALHA NAVAL \n");
                printf("--- Todas as peças ---\n\n");       
            //Indice horizontal
                for (int p = 0; p <= 10; p++) {
                    printf ("%2c", Linha [p]); 
                }   printf("\n");
                for (int p = 0; p < 10; p++) {
            //Indice vertical
                    printf("%2d", Coluna [p]);              
                    for (int q = 0; q < 10; q++) { 
            //Entrada Matriz           
                        printf (" %d", Matriz5[p][q]); 
                    }   printf("\n");  
                }       printf("\n");            
                break;
            //Sair do Jogo 
                case 8:
                    printf("\n\n");
                    printf("Fim de Jogo!!!\n\n");
                break;
            //Opção invalida
                default:
                    printf("\n\n");
                    printf("Opção inválida - Final de Jogo!!!\n\n");                  
            }
        printf("\n\n");

    return 0;

    }
