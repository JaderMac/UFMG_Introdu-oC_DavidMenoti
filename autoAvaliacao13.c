/*
Reescreva o exemplo acima, realizando a cada leitura um teste para ver se a dimensão do
vetor não foi ultrapassada. Caso o usuário entre com 100 números, o programa deverá abortar
o loop de leitura automaticamente. O uso do Flag (-999) não deve ser retirado.
*/
#include <stdio.h>
int main (){
    int numeros[2]; /* Declara um vetor de inteiros de 100 posicoes */
    int validaTamanhoVetor = 2;
    int contador = 0;
    int totalnumeros = 0;
    do
    {   
        fflush(stdin);
        printf ("\nEntre com um numero (-999 termina!): ");
        scanf ("%d",&numeros[contador]);
        
        contador++;
        validaTamanhoVetor--;

        if(validaTamanhoVetor == 0){
            printf ("\nTamanho do Vetor estourado!");
            break;
        }
    } while ((numeros[contador-1]!=-999));

    totalnumeros=contador-1;

    printf("\n\n\n\t Os números que você digitou foram:\n\n");
    for (contador = 0; contador <= totalnumeros; contador++)
    printf (" %d", numeros[contador]);

    return(0);
}