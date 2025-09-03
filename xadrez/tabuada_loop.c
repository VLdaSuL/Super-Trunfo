#include <stdio.h>
    int main(){

 /*       //Tabuada
        int numero, i;
        //printf(:"\n");
        printf("Digite um numero para calcularmos a tabuada:   ");
        scanf("%d", &numero);
        //printf("\n");
        for(i = 0; i <=10; i++) 
        {
            printf("%d x %d = %d \n", i, numero, i * numero);
        }
*/        //printf("\n");


/*
        printf("\n");
        printf("Tabuada:  \n");
        int i = 1;
        while (i <= 1)
        {
            int j = 0;
            while (j <= 10)
            {
             printf("%d x %d = %d \n", i, j, i * j);
             j++;               
            }     
        printf("\n");
        i++;
        }
*/

/*        printf("\n");
        printf("Tabuada:  \n");
        int i = 1;
        do
        {
            do
            {
            int j = 0; //Variavel do DO interno
            printf("\n");
            printf("%d x %d = %d \n", i, j, i * j);
            j++;
            } while (j <= 10);
        
        printf("\n");
        i++;
        } while (i <= 4);
 */       

        printf("\n");
        printf("Tabuada:  \n");
        for (int i = 1; i <= 3; i++)
        {

          for (int j = 0; j <=10; j++)
          {
            printf("%d x %d = %d\n", i, j, i * j);           
          }
        printf("\n");         
        }
     
        //Tabuada com while, do while e for


    return 0;

    }