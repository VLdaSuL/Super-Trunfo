#include <stdio.h>
    int main () {

        //Desafio:
        //Bispo 5 casas na diagonal
        //Rainha 8 casas para esquerda
        //Torre 5 casas para frente

        int numero, i, jogadas;

        printf("\n\n");
        printf("Jogo de Xadrez: \n");
        printf("1. Informações\n");
        printf("2. Movimentando o Bispo\n");
        printf("3. Movimentando a Rainha\n");
        printf("4. Movimenando a Torre\n");
        printf("5. Sair\n");

            printf("\n\nDigite uma opção:\n");
            scanf("%d", &jogadas);

            switch (jogadas) 
            {
            //Entrando com as informações do movimento das peças    
            case 1:
                printf("\n");
                printf("Utilizando loops, três movimentos de peças de xadrez cadastrados.\n");
                printf("Na opção 2, utilizado o loop While para mover o Bispo.\n");
                printf("Na opção 3, a movimentação da rainha com Do While.\n");
                printf("Na opção 4, a movimentação simples da Torre com o comando For.\n");
                printf("Por fim a opção 5, sair da vizualização.\n\n\n");
            break;
            //Movimentação do Bispo utilizando o loop While
            case 2:
                i = 1;
                printf("\n");
                printf("Movimentando o Bispo.\n");
                while (i <= 5) {
                printf("Cima\n");
                printf("Direita\n");
                i++;
                }  
                printf("\n");      
            break;
            //Movimentando a Rainha com o loop Do While
            case 3:
                printf("\n");        
                printf("Movimentando a Rainha.\n");
                i = 1;
                do { 
                printf("Esquerda\n"); 
                i++;
                } while (i <= 8); 
                printf("\n");              
            break;
            case 4:
                printf("\n");
                printf("Movimentando a Torre.\n");
                for(i = 1; i <= 5; i++) {
                printf("Cima\n");
                }
                printf("\n");
            break;
            //Saindo do programa
            case 5:
                    printf("\n");
                    printf("Saindo!\n\n\n"); 
            break;
            //Mensagem de erro default
            default:
                    printf("\n");
                    printf("Opção inválida!\n\n\n");
            break;
            }

    return 0;

    }

    