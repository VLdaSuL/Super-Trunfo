#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main () {

    //Entranda das variaveis;
    int turistico1, turistico2;
    int populacao1, populacao2;
    float pib1, pib2, area1, area2;
    double densidade1, densidade2, percapita1, percapita2;
    double super1, super2;
    char estado1[15], estado2[15], codigo1[5], codigo2[5]; 
    char cidade1[15], cidade2[15];
    int opcao, batalha;
    int carta1, carta2;
    carta1 = 0;
    carta2 = 0;

/*    
//Bloco Teste
populacao1 = 1;
populacao2 = 0;
area1 = 0;
area2 = 1;
pib1 = 1;
pib2 = 0;
turistico1 = 0;
turistico2 = 1;
densidade1 = 1;
densidade2 =0;
percapita1 = 1;
percapita2 = 0;
super1 = 0;
super2 = 1;
*/

    printf("\n\nJOGO SUPER TRUNFO\n\n");

    printf("1. Regras do jogo\n");
    printf("2. Inicio do jogo\n");
    printf("3. Sair do jogo\n");

    printf("\n\nDigite uma opção:");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("\nEste é o jogo Super Trunfo\n\n");
        printf("Você pode jogar sozinho, mais com um amigo, fica ainda mais divertido.\n");
        printf("Cada jogador vai precisar de 1 carta do jogo Super Trunfo.\n");
        printf("No inicio do jogo, o jogador 1 vai inserir os atributos de sua carta.\n");
        printf("Na sequência, é a vez do jogar 2 inserir os atributos da sua carta.\n");
        printf("No menu a seguir, só escolher um dos atributos e torcer!.\n");
        printf("A carta vencedora será aprensentada e o resultado final da batalha.\n");
        printf("Para continuar, só trocarem as cartas por uma nova e reiniciar o jogo.\n");
        printf("Boa Jogo!!!.\n\n");
        printf("Volte ao menu inicial.\n\n");
        break;

        case 2:
        //Cadastrando primeira carta;
        printf("Digite os dados da primeira carta: \n");
        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
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
        scanf("%d", &turistico1);
        //Cadastrando segunda carta;
        printf("Digite os dados da segunda carta: \n");
        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
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
        //Calculando váriavel densidade populacional;
        densidade1 = (float)populacao1 / area1;
        densidade2 = (float)populacao2 / area2;
        //Calculando variável PIB per Capita;
        //Conversão do PIB em bilhões;
        percapita1 = (pib1*1000000000) / (float)populacao1;
        percapita2 = (pib2*1000000000) / (float)populacao2;
        //Calculando super poderes
        super1 = (float)(populacao1 + area1 + pib1 + turistico1 + percapita1);
        super2 = (float)(populacao2 + area2 + pib2 + turistico2 + percapita2);  

    //Somando pontuação com a operação encremento
    
    populacao1 > populacao2 ? (carta1++) : (carta2++);
    area1 > area2 ? (carta1++) : (carta2++);
    pib1 > pib2 ? (carta1++) : (carta2++);
    turistico1 > turistico2 ? (carta1++) : (carta2++);
    densidade1 < densidade2 ? (carta1++) : (carta2++);
    percapita1 > percapita2 ? (carta1++) : (carta2++);
    super1 > super2 ? (carta1++) : (carta2++);
    
    
    printf("\nPlacar do Jogo: \n");
   
    if (carta1 > carta2){
        printf("\nJogador com a carta 1 venceu. Parabéns!!!\n");
    } else if (carta1 < carta2) {
        printf("\nJogador com a carta 2 venceu. Parabéns!!!\n");
    } else {
        printf("\nIncrivel, o jogo deu empate!!!\n");
    }
        printf("Placar da Batalha: \n");
        printf("Carta 1: %d pontos e Carta 2: %d pontos.\n", carta1, carta2);
            //Cartas do jogo;
        printf("\nInformações das Cartas:\n");
        //Impressão primeira carta;
        printf("\nCARTA 1\n");
        printf("Nome do Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", percapita1);
        printf("Super Poder da Carta 1: %.2f pontos.\n", super1);
                        
        //Impressão segunda carta
        printf("\nCARTA 2\n");
        printf("Nome do Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", percapita2);
        printf("Super Poder da Carta 2: %.2f pontos.\n\n\n", super2);        
        break;
        case 3:
            printf("\n\nFIM DE JOGO!!!\n\n");            
        break;

        default:
        printf("\n\nOpção inválida!\n");
        printf("\nFIM DE JOGO!!!\n\n"); 
        break;
    }     
        
    
    return 0;

}
