#include <stdio.h>

/*
d) O código ASCII é um conjunto de 256 símbolos (de 0 a 255). Escreva um programa que
imprima todos os caracteres ASCII, pulando uma linha no final de cada caractere impresso,
por exemplo: ASCII(64 = A).
*/

/*
a) Explique porque está errado fazer if (num=10) O que irá acontecer?
Apresentará erro na condição, pois apenas = é utilizado para atribuir valor, 
para realizar a condicional é necessário utilizar ==.
*/

/*
b) Escreva um programa que coloque os números de 1 a 100 na tela na ordem inversa
(começando em 100 e terminando em 1).
*/

/*
c) Escreva um programa que leia uma string, conte quantos caracteres desta string são iguais a
'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir o número de
caracteres modificados e a string modificada.
*/
// função conta caracteres da string item c
int strlen(char *str){
    int total=0;
    while( str[total] != '\0')
        total++;
    return total;
}

int main()    {
    // item b
    for(int i = 100; i >= 0; i--){
        printf("%d", i);
    }

    // item c
    char stringDigitada[99] = "testes";
    int caracteres = 0;
    int caracteresA = 0;
    int caracteresModificados = 0;

    printf("\nDigite uma palavra : ");
    scanf("%s", stringDigitada);
    caracteres = strlen(stringDigitada);
    printf("\nA palavra digitada foi %s.", stringDigitada);
    printf("\nA palavra tem %d letras.", caracteres);

    for(caracteres; caracteres >= 0; caracteres--){ 
        if(stringDigitada[caracteres] == 'a'){
            caracteresA++;
            stringDigitada[caracteres] = 'b';
            caracteresModificados++;
        }
    }
    printf("\n%d são iguais a A", caracteresA);
    printf("\n%d caracteres foram modificados", caracteresModificados);
    printf("\nA palavra final é %s", stringDigitada);
    
    // item d.
    return(0);
}