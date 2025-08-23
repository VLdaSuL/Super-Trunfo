#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main (){
        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        //Gerar numero aleatório
        srand (time(0));
        numeroComputador = rand() % 100 + 1; //Número vai de 1 à 100

        // Início do jogo
        printf("Bem-Vindo ao jogo Maior, Menor ou Igual!\n");
        printf("Você deve escolher um número e o tipo de comparação.\n"); 
        printf("M. Maior\n");
        printf("N. Menor\n");
        printf("I. Igual\n");

        printf("Escolha a comparação: ");
        scanf("%c", &tipoComparacao);

        printf("Escolha um número: ");
        scanf("%d", &numeroJogador);

        //Exibir número do computador
        //printf("O número do computador é: %d\n", numeroComputador);
        
        switch (tipoComparacao) {
            case 'M':
            case 'n':
                printf("Você escolheu a opção maior!\n");
                resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;

            case 'N':
                printf("Você escolheu a opção menor\n");
                resultado = numeroJogador < numeroComputador ? 1 : 0;
             break;

            case 'I':
            case 'i':
                printf("Você escolheu a opção igual\n");
                resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;

            default:
            printf("Opção de jogo inválida\n");
            break;
        }

        printf("O número do jogador é: %d e o numero do Computador é: %d\n", numeroJogador, numeroComputador);        

        if (resultado == 1) {
            printf("Parabéns, você venceu!\n");
        } else {
            printf("Poxa, você perdeu!\n");
        }


    }       