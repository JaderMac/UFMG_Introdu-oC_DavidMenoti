/*
Escreva um programa que pede para o usuário entrar um número correspondente a um dia da
semana e que então apresente na tela o nome do dia. utilizando o comando switch.
*/
#include <stdio.h>
int main(){
    int dia;
    printf ("Digite um numero (de 1 a 7) : ");
    scanf ("%d",&dia);
    switch (dia)
        {         
            case 1:
            printf ("\n\nEste numero equivale a Domingo\n");
            break;
            case 2:
            printf ("\n\nO numero equivale a Segunda-feira.\n");
            break;
            case 3:
            printf ("\n\nO numero equivale a Terça-feira.\n");
            break;
            case 4:
            printf ("\n\nO numero equivale a Quarta-feira.\n");
            break;
            case 5:
            printf ("\n\nO numero equivale a Quinta-feira.\n");
            break;
            case 6:
            printf ("\n\nO numero equivale a Sexta-feira.\n");
            break;
            case 7:
            printf ("\n\nO numero equivale a Sabado.\n");
            break;
            default:
            printf ("\n\nO numero nao equivale a um dia da semana!.\n");
            }
    return(0);
}