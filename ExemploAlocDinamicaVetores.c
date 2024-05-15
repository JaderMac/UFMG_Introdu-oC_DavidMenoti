#include <stdio.h>
#include <stdlib.h>

float *Alocar_vetor_real (int n){
    float *v; /* ponteiro para o vetor */
    if (n < 1){ /* verifica parametros recebidos */
        printf ("** Erro: Parametro invalido **\n");
        return (NULL);
    }   
    /* aloca o vetor */
    v = calloc (n, sizeof(float));
    if (v == NULL){
        printf ("** Erro: Memoria Insuficiente **");
        return (NULL);
    }
    return (v); /* retorna o ponteiro para o vetor */
}
float *Liberar_vetor_real (float *v){
    if (v == NULL)
        return (NULL);
    free(v); /* libera o vetor */
    return (NULL); /* retorna o ponteiro */
}
void main (void){
    float *p;
    int a;
    ... /* outros comandos, inclusive a inicializacao de a */
    p = Alocar_vetor_real (a);
    ... /* outros comandos, utilizando p[] normalmente */
    p = Liberar_vetor_real (p);
}