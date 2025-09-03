#include <stdio.h>
    int main (){
        int cavalo;
        int i = 1;
        printf("\n");
        printf("\nMovimentando Cavalo:\n");
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


    return 0;

    }