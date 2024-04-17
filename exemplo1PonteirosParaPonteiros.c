#include <stdio.h>
int main(){
    float fpi = 3.1415, *pf, **ppf;
    pf = &fpi; /* pf armazena o endereco de fpi */
    ppf = &pf; /* ppf armazena o endereco de pf */

    printf("%f", **ppf); /* Imprime o valor de fpi */
    printf("\n%f", *pf); /* Tambem imprime o valor de fpi */

    return(0);
}