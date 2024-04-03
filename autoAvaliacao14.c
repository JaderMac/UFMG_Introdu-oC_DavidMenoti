/*
Faça um programa que leia quatro palavras pelo teclado, e armazene cada palavra em uma
string. Depois, concatene todas as strings lidas numa única string. Por fim apresente esta
como resultado ao final do programa.
*/
#include <stdio.h>
#include <string.h>

int main(){

    char stringUm[20];
    char stringDois[20];
    char stringTres[20];
    char stringQuatro[20];
    char stringGrandona[80];
    
    printf("\nEntre com o valor da primeira string : ");
    gets(stringUm);
    printf("Entre com o valor da segunda string : ");
    gets(stringDois);
    printf("Entre com o valor da terceira string : ");
    gets(stringTres);
    printf("Entre com o valor da quarta string : ");
    gets(stringQuatro);

    strcat(stringGrandona, stringUm);
    strcat(stringGrandona, stringDois);
    strcat(stringGrandona, stringTres);
    strcat(stringGrandona, stringQuatro);

    printf("\n%s", stringGrandona);


    return 0;
}