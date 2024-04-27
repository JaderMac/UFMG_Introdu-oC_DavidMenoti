/*
Escreva um programa que leia um vetor de inteiros pelo teclado e o apresente na tela. Crie
uma função (void levetor(int *vet, int dimensao)) para fazer a leitura do vetor.
*/
#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i <= 5; i++){
        printf("Entre com o %d valor : ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i <= 5; i++){
        printf("%d", vetor[i]);
    }
return(0);
}