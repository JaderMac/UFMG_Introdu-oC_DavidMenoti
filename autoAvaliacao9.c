/**
Faça um programa que inverta uma string: leia a string com gets e armazene-a invertida em
outra string. Use o comando for para varrer a string até o seu final.
*/
#include <stdio.h>
#include <string.h>

int retornaTamanhoString(char *string){
    int total=0;
    while( string[total] != '\0')
        total++;
    return total;
}

main(){

    int tamanhoPalavra = 0;
    char stringDigitada[25];

    printf("Digite uma palavra : ");
    scanf("%s", stringDigitada);

    tamanhoPalavra = retornaTamanhoString(stringDigitada);

    for(int i = tamanhoPalavra; i >= 0; i--){
        printf("%c\n", stringDigitada[i]);
    } 

}