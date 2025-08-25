#include <stdio.h>
    int main () {

        //Desafio:
        //Bispo 5 casas na diagonal com while
        //Rainha 8 casas para esquerda com do while
        //Torre 5 casas para frente com for
        //Cavalo em oito direções com looping aninhado do while e for

        int numero, i, jogadas;

        printf("\n\n");
        printf("Jogo de Xadrez: \n");
        printf("1. Informações\n");
        printf("2. Movimentando o Bispo\n");
        printf("3. Movimentando a Rainha\n");
        printf("4. Movimentando a Torre\n");
        printf("5. Movimentando o Cavalo\n");
        printf("6. Sair\n");

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
                printf("Na opção 5, Movimentando o Cavalo com looping aninhado Do While e For.\n");               
                printf("Por fim a opção 6, sair da vizualização.\n\n\n");
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
            //Movimentando a Torre com loop For
            case 4:
                printf("\n");
                printf("Movimentando a Torre.\n");
                for(i = 1; i <= 5; i++) {
                printf("Cima\n");
                }
                printf("\n");
            break;
            //Movimentando o Cavalo
            case 5:
        int cavalo;
        int i = 1;
        printf("\n");
        printf("\nEscolha um movimentos:\n");
        printf("1. Cima e Direita\n");
        printf("2. Direta e Cima\n");
        printf("3. Direta e Baixo\n");
        printf("4. Baixo e Direita\n");
        printf("5. Baixo e Esqueda\n");
        printf("6. Esquerda e Baixo\n");
        printf("7. Esquerda e Cima\n");
        printf("8. Cima e Esquerda\n");        
        printf("9. Sair.\n");
        printf("\n");      
        printf("Escolha um movimentos para o Cavalo: ");
        scanf("%d", &cavalo);

        switch (cavalo)
        {
        case 1:
            //Cima e para Direita
            printf("\nMovimentando o Cavalo. \n");
            do 
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Cima\n");
            }            
            printf("Direita\n");
            i++;
            } while ( i <= 1);          
            printf("\n");
        break;
         case 2:
            //Direita e para Cima
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Direita\n");
            }            
            printf("Cima\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 3:        
            //Direita e para Baixo
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Direita\n");
            }            
            printf("Baixo\n");
            i++;
            } while (i <= 1);
            printf("\n");               
        break;        
        case 4:
            //Baixo e para Direita
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Baixo\n");
            }            
            printf("Direita\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 5:
            //Baixo e para Esquerda
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Baixo\n");
            }            
            printf("Esquerda\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 6:
            //Esquerda e para Baixo
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Esquerda\n");
            }            
            printf("Baixo\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 7:
            //Esquerda e para Cima
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Esquerda\n");
            }            
            printf("Cima\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 8:
            //Cima e para Esquerda
            printf("\nMovimentando o Cavalo. \n");          
            do     
            {
            int j;
            for (j = 1; j <= 2; j++) {
            printf("Cima\n");
            }            
            printf("Esqueda\n");
            i++;
            } while (i <= 1);
            printf("\n");
        break;
        case 9:
            printf("Saindo.");
            printf("\n");
        break;
        default:
            printf("Opção inválida!");
            printf("\n");            
        break;
        }
            break;            
            //Saindo do programa
            case 6:
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