/*
a) Escreva um programa que leia um caractere digitado pelo usuário, imprima o caractere
digitado e o código ASCII correspondente a este caractere.
b) Escreva um programa que leia duas strings e as coloque na tela. Imprima também a
segunda letra de cada string.
*/
#include <stdio.h>
int main()
{
    char charDigitado;
    char stringDigitada1[99] = "Jader";
    char stringDigitada2[99] = "Jessica";;

    printf("Digite um caractere : ");
    scanf("%c", &charDigitado);
    printf("\nValor digitado em ASCII é %d\n", charDigitado);

    fflush(stdin);
    printf("\nDigite uma palavra:(1) ");
    scanf("%s",stringDigitada1);
    fflush(stdin);
    printf("\nDigite uma palavra:(2) ");
    scanf("%s",stringDigitada2);

    printf("\nA palavra (1) é : %s", &stringDigitada1);
    printf("\nA palavra (2) é : %s", &stringDigitada2);

    printf("\nA segunda letra de (1) é : %c", stringDigitada1[1]);
    printf("\nA segunda letra de (2) é : %c", stringDigitada2[1]);

    return(0);
}