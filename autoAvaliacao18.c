#include <stdio.h>

void StrCpy (char *destino,char *origem)
{
    while (*origem){
        *destino=*origem;
        origem++;
        destino++;
    }
    *destino='\0';
}
/*
char StrCat(char *destino, char *origem){
    *destino += *origem;
}
*/

int StrLen(char *str){
    int total=0;
    while( str[total] != '\0')
        total++;
    return total;
}

int main ()
{   
    char nome[20] = "Jader";
    char sobrenome[30] = "Machado";

    printf("Candidato : %s", StrCat(nome, sobrenome));
    return(0);
}