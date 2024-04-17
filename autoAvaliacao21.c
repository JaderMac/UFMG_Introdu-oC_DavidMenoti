/*
Escreva um programa que declare uma matriz 100x100 de inteiros. Você deve inicializar a
matriz com zeros usando ponteiros para endereçar seus elementos. Preencha depois a matriz
com os números de 1 a 10000, também usando ponteiros.
*/
#include <stdio.h>
int main()
{
    int matriz[100][100];
    int *ponteiro;
    ponteiro = matriz[0];

    // prenchendo a matriz
    for (int i = 0; i < 10000; i++){
        *ponteiro = i;
        ponteiro++;
    }

    // imprimindo a matriz
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }


    return(0);
}