#include<stdio.h>

    //Desafio Mestre Prof Sergio Cardoso.
    //Mover o Bispo 5x diagonal para cima - Cima/Direita
    //Mover a Torre 5x para Direita
    //Mover a Rainha 8x para Esquerda
    //Mover o Cavalo 2x para Cima e Direita

    void moverBispo (int casas) {
        if (casas > 0) {
        printf("Direita\n");
        printf("Cima\n");        
        moverBispo (casas -1);
        }
    }
    void moverTorre (int casas) {
        if (casas > 0) {
        printf("Direita\n");
        moverTorre (casas -1);
        }
    }
    void moverRainha (int casas) {
        if (casas > 0) {
        printf("Esquerda\n");
        moverRainha (casas -1);
        }
    }
    void moverCavalo (int casas) {
        if (casas > 0) {
        printf("Cima\n");
        moverCavalo (casas -1);
        }
    }

        int main() {
        int jogada;
        //Nome do projeto
        printf("\n\n");
        printf("Movimentando as peças de xadrez:\n");        
        printf("\n");
        //Movimento do Bispo
        printf("Movimentando o Bispo.\n");
        moverBispo (5);
        printf("\n");
        //Moviemento da Torre
        printf("Movimentando a Torre.\n");
        moverTorre (5);
        printf("\n");
        //Moviemento da Rainha
        printf("Movimentando a Rainha.\n");
        moverRainha (8);
        printf("\n");
        //Movimento do Cavalo      
        printf("Movimentando a Cavalo.\n");
        moverCavalo (2);
        printf("Direita\n");
        printf("\n");


        return 0;

    }