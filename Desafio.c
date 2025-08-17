#include <stdio.h>

    int main(){

        //Projeto faculdade
        printf("\nProjeto Jogo Super Trunfo");

        //Entranda das variaveis
        int populacao1, popolacao2, turisco1, turistico2;
        float pib1, pib2, area1, area2;
        char estado1[15], estado2[15], codigo1[5], codigo2[5]; 
        char cidade1[15], cidade2[15];

        //Cadastrando primeira carta
        printf("Cadastrando primeira carta: \n");

        //Entrada dos dados
        printf("Digite o nome do Estado: ");
        scanf("%s", estado1);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turisco1);

        //Cadastrando segunda carta
        printf("Cadastrando segunda carta: \n");

        //Entrada dos dados
        printf("Digite o nome do Estado: ");
        scanf("%s", estado2);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
        printf("Digite a população: \n");
        scanf("%d", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico2);



        return 0;
    }