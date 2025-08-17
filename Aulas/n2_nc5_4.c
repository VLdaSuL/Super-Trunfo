#include <stdio.h>

    int main(){
        int a = 10;
        int b = 3;
        float quociente = (float) a / b;
        //'a' é explicitamente convertido para float
        //retirando (float), resultado muda de 3.33 para 3.00 DIFERENÇA PARA TESTE

        printf("\n\nQuociente: %.2f\n", quociente);

    return 0;

    }