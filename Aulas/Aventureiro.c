#include <stdio.h>

    int main(){

        //Projeto faculdade
        printf("\nProjeto Jogo Super Trunfo\n");

        //Entranda das variaveis
        int turistico1, turistico2;
        float populacao1, populacao2;
        float pib1, pib2, area1, area2;
        float densidade1, densidade2, percapita1, percapita2;
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
        scanf("%f", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico1);

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
        scanf("%f", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico2);

        //Calculando densidade populacional
        densidade1 = populacao1 / area1;
        densidade2 = populacao2 / area2;

        //Calculando PIB per Capita
        percapita1 = (pib1 / populacao1);
        percapita2 = (pib2 / populacao2);

        //Cartas do jogo
        printf("\nCartas Cadastradas: \n");

        //Impressão primeira carta
        printf("\nCARTA 1\n");
        printf("Nome do Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %f habitantes\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.2f de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", percapita1);

        //Impressão segunda carta
        printf("\nCARTA 2\n");
        printf("Nome do Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %f habitantes\n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: %.2f de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", percapita2);


        return 0;
    }