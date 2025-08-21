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

int a = 5;
int b = -10;
int c = 1;

if (a > 0 && b < 0 || c == 0) {
    printf("Todos os teste verdadeiros");
} else {
    printf("Algo deu errado");
}



}