#include <stdio.h>

    int main (){

int variavel;

printf("\n\nDigite um valor\n");
scanf("%d", &variavel);

switch (variavel) {
case 1:
    printf("codigo a ser executado se variavel == valor1");
break;
case 2:
    printf("Código a ser executado se variavel == valor2");
break;
default:
    printf("Código a ser executado se variavel não for 1 ou 2\n");
}

}