#include<stdio.h>

    void moverTorre (int casas) {
        printf("Direita\n");
        moverTorre (casas -1);
    }

    int main() {

        moverTorre (5)
        return 0;

    }