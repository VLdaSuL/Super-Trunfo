#include <stdio.h>

int main (){

    int menor, num, controle;
int ind = 1;

while (ind <=5)
{
   scanf ("%d", &num);
   controle++;

   if (controle == 1 && num % 2 == 0) {
    menor = num;
   } else if (num < menor) {
    menor = num;
    ind++;
   }
}



return 0;

}