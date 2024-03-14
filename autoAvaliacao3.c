/*
a) Escreva um programa que leia um caractere digitado pelo usuário, imprima o caractere
digitado e o código ASCII correspondente a este caractere.
b) Escreva um programa que leia duas VWULQJV e as coloque na tela. Imprima também a
segunda letra de cada string.
*/
#include <stdio.h>
int main()
{
    char charDigitado;
    char stringDigitada[99];

    printf("Digite um caractere : ");
    scanf("%c", &charDigitado);
    printf("\nValor digitado em ASCII é %d", charDigitado);

    printf("\nDigite uma palavra.");
    gets(stringDigitada);
    printf("\nA segunda letra é : %c", stringDigitada[1]);

    return(0);
}