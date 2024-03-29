/**
Refaça o programa da seção anterior (4.3). Use o comando ZKLOH para fechar o loop.
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

    int tamanhoPalavra = 0, iteracao;
    char stringDigitada[25];

    printf("Digite uma palavra : ");
    scanf("%s", stringDigitada);

    tamanhoPalavra = retornaTamanhoString(stringDigitada);

    //for(int i = tamanhoPalavra; i >= 0; i--){
    //    printf("%c\n", stringDigitada[i]);
    //} 

    iteracao = tamanhoPalavra;
    while(iteracao >= 0){ 
        printf("%c\n", stringDigitada[iteracao]);
        iteracao--;
    }

}