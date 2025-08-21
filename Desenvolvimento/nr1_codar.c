#include <stdio.h>

  int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    //Coletando informações de temperatura, umidade e estoque
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com o valor da umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque");
    scanf("%d", &estoque);

    //Testando a temperatura do ambiente
    if (temperatura > 30) {
        printf("Temperatura esta alta!\n");
    } else {
        printf("Temperatura esta dentro dos parâmetros.\n");
    }

    //Testando a umidade do ambiente
    if (umidade > 50) {
        printf("Umidade esta elevada!\n");
    } else {
        printf("Umidade dentro dos parâmetros,\n");
    }

    //Testando estoque do ambiente
    if (estoque > estoqueMinimo) {
        printf("Estoque esta dentro dos parâmetros\n");
    } else {
        printf("Estoque esta abaixo do mínimo.\n");
    }

    }




  