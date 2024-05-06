/*
Veja como você está. Escreva um programa fazendo o uso de struct's. Você deverá criar uma
struct chamada Ponto, contendo apenas a posição x e y (inteiros) do ponto. Declare 2 pontos,
leia a posição (coordenadas x e y) de cada um e calcule a distância entre eles. Apresente no
final a distância entre os dois pontos.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

struct ponto{
    double EixoX;
    double EixoY;
};

distancia(int Xponto1, int Yponto1, int Xponto2, int Yponto2){
    return sqrt( pow(Xponto1 - Xponto2, 2) + pow(Yponto1 - Yponto2, 2) );
}

int main(){
    struct ponto pontoA;
    struct ponto pontoB;

    pontoA.EixoX = -12;
    pontoA.EixoY = -7;

    pontoB.EixoX = 8;
    pontoB.EixoY = 8;

    printf("A distancia é : %d", distancia(pontoA.EixoX, pontoA.EixoY, pontoB.EixoX, pontoB.EixoY));

    return 0;
}
