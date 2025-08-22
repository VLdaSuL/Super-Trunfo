#include <stdio.h>

    int main(){
        int opcao;
        float nota1, nota2, media;

        printf("Menu de Gerenciamento de Estudantes\n");
        printf("1. Calcular Média\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            //Primeira parte, entrada das notas
            case 1:
            printf("\nCalcular a Média\n");
            printf("\nDigite a primeira nota:\n");
            scanf("%f", &nota1 );
            printf("\nDigite a segunda nota:\n");
            scanf("%f", &nota2 );
            //Teste de condição se a nota é >= 0 e <= 10
            if ( (nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10) ) {
                media = (nota1 + nota2) / 2;
                printf ("\nA média é: %.2f\n\n", media);
            //printf("Entrada correta");                
            } else {
                printf("Digite corretamente os valores das notas!\n\n");
            }          
            break;
            //Segunda parte, determinar se aluno foi aprovado ou reprovado
            case 2:
                printf("\nDeterminar status\n");
                printf("Entrar com o valor da média do aluno: ");
                scanf("%f", &media);
                //media >= 6 ? printf("Aluno esta aprovado!\n\n") : printf("Aluno esta reprovado.\n\n");
                //Acima usando ternário e abaixo usando if e else
                if (media >= 6) {
                    printf("Aluno esta aprovado\n\n");
                } else if (media >= 5) {
                    printf("Aluno esta de recuperação!\n\n");
                } else {
                    printf("Aluno esta reprovado!\n\n");
                }
            break;
            default:
                    printf("\nFim do programa\n\n\n");
            break;    
        }


    return 0;

    }