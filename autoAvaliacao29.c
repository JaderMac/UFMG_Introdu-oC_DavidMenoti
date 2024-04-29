/*
Veja como você está. Refaça os exemplos desta página, mas ao invés de trabalhar com um
vetor de inteiros, use um vetor de strings (ou uma matriz de char, como você preferir). Faça
leituras e apresente os resultados na tela.
*/
#include <stdio.h>
#include <stdlib.h> /* Para usar malloc e free */

int main(){
    
    int *p;
    int a = 5;

    p = (int*) malloc (a*sizeof(int));

    if (!p){
        printf ("** Erro: Memoria Insuficiente **");
        exit;
    }

    for (int i=0; i<a ; i++){
        p[i] = i;
    }
    
    for (int i=0; i<a ; i++){
        printf(" %d ", p[i]);
    }
    printf(" \n ");
    a = 15;
    p = (int*) realloc (p, a*sizeof(int));

    for (int i=0; i<a ; i++){
        p[i] = i;
    }
    
    for (int i=0; i<a ; i++){
        printf(" %d ", p[i]);
    }

    //printf(" %n ", p[i]);
    free(p);
    return 0;
}
