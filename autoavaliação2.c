
/*
Veja como você está. Escreva uma função que receba e some (a função deve somente fazer o
cálculo) dois inteiros e retorne o valor da soma.
*/
#include <stdio.h>

int somaNumeros(int a, int b){
    return a + b;
}
int main()
{
    int numUm = 1, numDois = 2, resultado = 0;
    resultado = somaNumeros(numUm, numDois);
    printf("O resultado é : %d", resultado);
    return(0);
}