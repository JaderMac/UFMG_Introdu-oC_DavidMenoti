/*
Escreva um programa que declare uma variável inteira global e atribua o valor 10 a ela.
Declare outras 5 variáveis inteiras locais ao programa principal e atribua os valores 20, 30, ...,
60 a elas. Declare 6 variáveis caracteres e atribua a elas as letras c, o, e, l, h, a . 
Finalmente, o programa deverá imprimir, usando todas as variáveis declaradas:
As variáveis inteiras contem os números: 10,20,30,40,50,60
O animal contido nas variáveis caracteres e' a coelha
*/
#include <stdio.h>

int intGlobal  = 10;

int main()  {

int intlocal1 = 20;
int intlocal2 = 30;
int intlocal3 = 40;
int intlocal4 = 50;
int intlocal5 = 60;

char letra1 = 'c';
char letra2 = 'o';
char letra3 = 'e';
char letra4 = 'l';
char letra5 = 'h';
char letra6 = 'a';

printf("%d, %d, %d, %d, %d, %d", intGlobal, intlocal1, intlocal2, intlocal3, intlocal4, intlocal5 );
printf("\n%c%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5, letra6);

}