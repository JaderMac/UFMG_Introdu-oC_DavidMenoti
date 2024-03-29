/*
#include <stdio.h>
int main()
{
int index = 0, contador;
char letras[5] = "Joao";
for (contador=0; contador < 1000; contador++)
{
printf("\n%c",letras[index]);
(index==3) ? index=0: ++index;
}
}
Altere o último exemplo para que ele escreva cada letra 5 vezes seguidas. Para isto, use um 'if'
para testar se o contador é divisível por cinco (utilize o operador %) e só então realizar a
atualização em index.
*/
#include <stdio.h>
int main()
{
    int index = 0, contador;
    char letras[6] = "Jader";

    for (contador=0; contador < 5; contador++){
        int repeteCinco = 1;

        while(repeteCinco <= 5){
            printf("\n%c",letras[index]);
            repeteCinco++;
        }
        index++;
    }
}
