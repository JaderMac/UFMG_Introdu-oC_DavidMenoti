/*
Veja como você está. Escreva a função 'EDivisivel(int a, int b)' (tome como base EPar(int a)).
A função deverá retornar 1 se o resto da divisão de a por b for zero. Caso contrário, a função
deverá retornar zero.
*/
#include <stdio.h>

int EDivisivel(int a, int b){
    int resto = a % b;
    if(resto == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int numerador = 10;
    int denominador = 8;
    int resposta = EDivisivel(numerador,denominador);
    printf("%d",resposta);
    return 0;
}