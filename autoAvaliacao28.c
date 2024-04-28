/*
Veja como você está. Escreva um programa que leia (via teclado) e apresente uma matriz A
de 10x10 elementos na tela (ou eles sejam atribuídos pela seguinte forma: aij = 20i + 10j).
Utilize os novos códigos de formato aprendidos para que a matriz se apresente corretamente
identada. Altere os tipos de dados da matriz (int, float, double) e verifique a formatação
correta para a identação. Verifique também a leitura e impressão de números hexadecimais.
*/
#include <stdio.h>
int main(){
    int matriz[10][10];

    for(int i = 0; i <=10; i++){
        for(int j = 0; j <=10; j++){
            matriz[i][j] = 20 * i +  10 * j ;
            printf("%d", matriz[i][j]);
            }
        printf("\n");
    }
}