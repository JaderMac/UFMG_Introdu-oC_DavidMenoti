/*
Escreva um programa que peça três inteiros, correspondentes a dia , mês e ano. Peça os
números até conseguir valores que estejam na faixa correta (dias entre 1 e 31, mês entre 1 e 12
e ano entre 1900 e 2100). Verifique se o mês e o número de dias batem (incluindo verificação
de anos bissextos). Se estiver tudo certo imprima o número que aquele dia corresponde no
ano. Comente seu programa.
PS: Um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto para os anos
divisíveis por 400, que também são bissextos.
*/
#include <stdio.h>

bool validaDia(int dia){
    if((dia >= 1) && (dia <= 31)){
        return true;
    }else{
        return false;
    }
}

bool validaMes(int mes){
    if((mes >= 1) && (mes <= 12)){
        return true;
    }else{
        return false;
    }
}

bool validaAno(int ano){
    if((ano >= 1900) && (ano <= 2100)){
        return true;
    }else{
        return false;
    }
}

bool validaData(int dia, int mes, int ano){
    bool mesgrande = false;
    if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
        if(dia >= 30){
            return true;
        }
    }else{
        if(dia <= 30){
            return true;
        }
    }
    return false;
}

// não consegui fazer essa função funcionar 100%, dia 29/02 permitidos em anos não bissextos.
bool validaDataAnoBissexto(int ano, int mes, int dia){
    bool anoBissexto = false;
    bool mesFevereiro = false;

    if( (ano % 400 == 0) || (ano % 4 == 0) || (ano % 100 != 0) ){
        anoBissexto = true;
    }

    if(mes == 2){
        mesFevereiro = true;
    }

    if((anoBissexto == mesFevereiro == true) && (dia >= 29)){
        return true;
    } 
    
    if((anoBissexto == false) && (dia >= 29)){
        return false;
    }
}

int main()
{
    int dia;
    int mes; 
    int ano;
    bool validacaoDia = false; 
    bool validacaoMes = false; 
    bool validacaoAno = false; 
    bool validacaoData = false; 
    bool validacaoDataAnoBissexto = false;

    printf("Entre com o numero do dia : ");
    scanf("%d", &dia);
    
    printf("Entre com o numero do mês : ");
    scanf("%d", &mes);
 
    printf("Entre com o numero do ano (1900-2100): ");
    scanf("%d", &ano);   

    validacaoDia = validaDia(dia);
    validacaoMes = validaMes(mes);
    validacaoAno = validaAno(ano);
    validacaoData = validaData(dia, mes, ano);
    validacaoDataAnoBissexto = validaDataAnoBissexto(dia, mes, ano);

    if(validacaoDia == false){
        printf("Data inválida, dia fora do especificado!\n");
    }

    if(validacaoMes == false){
        printf("Data inválida, mês fora do especificado!\n");
    }

    if(validacaoAno == false){
        printf("Data inválida, ano fora do especificado!\n");
    }
    
    if(validacaoData == false){
        printf("Data inválida, esse mês não tem 31 dias!\n");
    }

    if(validacaoDataAnoBissexto == false){
        printf("Data inválida, Existe apenas em anos bissextos!\n");
    }
    
    
    if(validacaoDia == validacaoMes == validacaoAno == validacaoData == validacaoDataAnoBissexto == true){
        printf("\n Data válida!!!");
        printf("\n a data é %d/ %d/ %d.", dia, mes, ano);
    }
    return 0;
}