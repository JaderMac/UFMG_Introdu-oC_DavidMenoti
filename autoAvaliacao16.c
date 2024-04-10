
/*
Escreva um programa em C que calcule e Imprima a média dos 8 elementos vizinhos de cada
elemento da matrix A de NxN elementos definida por aij = N * i + j. Faça N = 5.
Obs. Nem todo elemento de matriz tem 8 vizinhos. Alguns apresentam 3 vizinhos e outros
5 vizinhos (os elementos na borda da matriz).
*/
# include <stdio.h>
int main()
{
    int j, i; // controle da matriz
    int N;  // quantidade de colunas da matriz - enunciado.
    int somatoria = 0;
    int quantidadeDeNumeros = 0;
    printf(" Entre com o valor de N : ");
    scanf("%d", &N);
    
    int A[N][N];

    // monta e imprime matriz
    for (i = 0; i < N ; i++){
        for (j = 0; j < N ; j++){
            A[i][j] = N * i + j;
            somatoria += A[i][j];
            quantidadeDeNumeros++;
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }  
    float media = somatoria / quantidadeDeNumeros;

    printf(" a media da matriz é %d", media);

    return(0);
}