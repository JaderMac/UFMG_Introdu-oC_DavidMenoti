/*
Escreva uma função que receba duas variáveis inteiras e "zere" o valor das variáveis. Use o
que você aprendeu nesta página para fazer a implementação
*/
#include <stdio.h>

void zeraInteiros(int *a){
    *a = 0;
}

int main(){
    int umNumero = 12;
    int outroNumero = 125;

    printf("%d ",umNumero);
    printf("%d",outroNumero);
    zeraInteiros(&umNumero);
    zeraInteiros(&outroNumero);
    printf("\t%d ",umNumero);
    printf("%d",outroNumero);

    return 0;
}