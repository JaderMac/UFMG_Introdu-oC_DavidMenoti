/*
Veja como você está. Escreva um programa que leia nomes pelo teclado e os imprima na tela.
Use as funções puts e gets para a leitura e impressão na tela.
*/
#include <stdio.h>
int main(){
    char buffer[10];
    printf("Entre com o seu nome");
    gets(buffer);
    puts(buffer);
    return 0;
}