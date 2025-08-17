#include <stdio.h>

    int main(){
    //Inserindo as variaveis do desfio.
    float nota1, nota2, soma, media;
    soma = nota1 + nota2;

    //Entrada das notas
    printf("\n\nDigite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    //Calculando a média
    media = soma / 2;

    //Imprimindo resultados
    printf("\n\nPrimeira nota: %.2f\n", nota1);
    printf("Segunda nota: %.2f\n", nota2);
    printf("Média final: %.2f\n", media);

    return 0;

    }