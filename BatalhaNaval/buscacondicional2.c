#include <stdio.h>

#define LINHA 10
#define COLUNA 10

    int main(){

        int matriz [LINHA][COLUNA]; // = {{1,2,3}, {4,5,6}, {7,8,9}}; //
        int target = 45;
        int found = 0;
        int soma = 1;

        printf("\n\n");

        for (int i = 0; i < LINHA; i++) {           //Loop externo de linhas
            for (int j = 0; j < COLUNA; j++) {       //Loop interno de colunas

                matriz[i][j] = soma;
                soma++;
                printf("%4d", matriz[i][j]);
                }
                printf("\n");
                
            }        

        // Busca condicional do elemento alvo
        for (int i = 0; i < LINHA; i++) {           //Loop externo de linhas
            for (int j = 0; j < COLUNA; j++) {       //Loop interno de colunas

                if(matriz[i][j] == target) {
                    printf("O valor %d encontrado no indice (%d %d)\n", target, i, j);
                    found = 1;
                    break;
                }
                
            }
            if (found) break;
        }
        if (!found) {
            printf("Elemento %d não encontrado na matriz\n", target);
        }


return 0;

}