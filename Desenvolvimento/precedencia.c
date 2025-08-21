#include<stdio.h>

int main (){

/*
ordem de cima para baixo e da esquerda para direita
() []
! - ++ -- (direita para esquerda)
* / %
+ -
< <= > >=
== !=
&&
||
= += -= *= /= %= (direita para esquerda)
,

video de instrução tema03 video2209

*/
/*
int a = -5;
int b = 10;
int c = 0;

if (a > 0 && b < 0 || c == 0) {
    printf("\n\nTodos os teste verdadeiros\n\n");
} else {
    printf("\n\nAlgo deu errado\n\n");
}
*/

int idade;
float altura;

idade = 31;
altura = 1.71;

if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("\n\nCandidato aprovado\n\n");
} else {
    printf("\n\nCandidato reprovado\n\n");
}


}