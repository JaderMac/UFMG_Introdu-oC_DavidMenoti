#include <stdio.h>
#include <stdlib.h>

float **Alocar_matriz_real (int m, int n){
    float **v; /* ponteiro para a matriz */
    int i; /* variavel auxiliar */
    if (m < 1 || n < 1){/* verifica parametros recebidos */
        printf ("** Erro: Parametro invalido **\n");
        return (NULL);
    }
    /* aloca as linhas da matriz */
    /* Um vetor de m ponteiros para float */
    v = calloc (m, sizeof(float *));
    if (v == NULL){
        printf ("** Erro: Memoria Insuficiente **");
        return (NULL);
    }
    /* aloca as colunas da matriz */
    for ( i = 0; i < m; i++ ){
        v[i] = calloc (n, sizeof(float)); /* m vetores de n floats */
        if (v[i] == NULL){
            printf ("** Erro: Memoria Insuficiente **");
            return (NULL);
        }
    }       
    return (v); /* retorna o ponteiro para a matriz */
}
float **Liberar_matriz_real (int m, int n, float **v){
    int i; /* variavel auxiliar */
    if (v == NULL) return (NULL);
        if (m < 1 || n < 1) { /* verifica parametros recebidos */
            printf ("** Erro: Parametro invalido **\n");
            return (v);
    }
    for (i=0; i<m; i++)
    free (v[i]); /* libera as linhas da matriz */
    free (v); /* libera a matriz (vetor de ponteiros) */
    return (NULL); /* retorna um ponteiro nulo */
}

void main (void){
    float **mat; /* matriz a ser alocada */
    int l, c; /* numero de linhas e colunas da matriz */
    int i, j;
    ... /* outros comandos, inclusive inicializacao para l e c */
    mat = Alocar_matriz_real (l, c);
    for (i = 0; i < l; i++)
        for ( j = 0; j < c; j++)
            mat[i][j] = i+j;
    ... /* outros comandos utilizando mat[][] normalmente */
    mat = Liberar_matriz_real (l, c, mat);
    ...
}