/*
Pra funcionar precisa criar um projeto no Rhide.
www.rhide.com
*/
#include <stdio.h>
#include "autoAvaliacao23.1.h"
void main ()
{
    int num;
    printf ("Entre com numero: ");
    scanf ("%d",&num);
    if (EPar(num))
    printf ("\n\nO numero e par.\n");
    else
    printf ("\n\nO numero e impar.\n");
}
