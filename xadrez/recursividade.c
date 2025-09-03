#include <stdio.h>
/*
    // Definição de processamento para imprimir uma mensagem
    void testerecursividade () {
        printf("Óla, mundo!\n");
    }

    int main () {

        printf("\n");
        //Chamada do procedimento
        testerecursividade () ;

        return 0;
    }
*/
/*
    //Função recursiva para imprimir números de n até 1
    void recursiveLoop (int n) {

            if (n > 0) {
                printf("%d ", n); //Imprime o valor atual de n
                recursiveLoop (n -1); // Chama a si mesma com n - 1
            }

    }

    int main (){
        int numero = 5;
        printf("\n");
        printf("Contagem regressiva: ");
        recursiveLoop (numero);
        return 0;
    }
*/

void recursivo(int numero) {
    if (numero > 0) {

        printf("%d \n", numero);
        recursivo (numero - 1);

    }

}

int main() {

    int quantidade = 10;
    printf("\n");
    printf("Contagem regressiva...\n");
    recursivo (quantidade);
    printf("PUM");

return 0;

}