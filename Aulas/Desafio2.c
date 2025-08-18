#include <stdio.h>

    int main(){
    //Inserindo as variaveis do desfio.
    float nota1, nota2, nota3, soma, media;
    soma = (nota1 + nota2 + nota3);

    //Entrada das notas
    printf("DIGITE AS NOTAS: \n");
    printf("\n\nDigite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    //Calculando a média
    media = (soma / 3);

    //Imprimindo resultados
    printf("\n\nNOTAS: \n");
    printf("Primeira nota: %f\n", nota1);
    printf("Segunda nota: %f\n", nota2);
    printf("Terceira nota: %f\n", nota3);
    printf("Média final: %f\n\n", media);

    return 0;

    }