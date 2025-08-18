#include <stdio.h>

    int main(){
    //Inserindo as variaveis do desfio.
    float nota1, nota2, nota3;
    float soma, media;

    //Entrada das notas
    printf("\n\nDIGITE AS NOTAS: \n");
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    //Calculando a média
    media = (float) (nota1 + nota2 + nota3) / 3;

    //Imprimindo resultados
    printf("\n\nNOTAS: \n");
    printf("Prova 1: %.1f\n", nota1);
    printf("Prova 2: %.1f\n", nota2);
    printf("Trabalhos: %.1f\n", nota3);
    printf("Média final: %.1f\n\n", media);

    return 0;

    }