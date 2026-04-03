#include <stdio.h>
#include <math.h>
//***********************************************************
//Programa que calcula a posição e velocidade de um objeto
// em queda livre
//***********************************************************

int main(){
    double posicao, alturaI;
    double velocidade = 0.0;
    double tempo = 0.0;
    double gravidade = 9.81; //aceleração da gravidade em m/s²

    printf("Informe a altura inicial da particula ( em metros):\n");
    scanf("%lf", &alturaI);

    posicao = alturaI;

    while(posicao >= 0.0){

        printf("No instante %f s, a posição da particula é %f m e a velocidade é %f m/s.\n", tempo, posicao, velocidade);
        posicao = alturaI - 0.5 * gravidade * pow(tempo, 2.0);
        velocidade = sqrt(2. * gravidade * (alturaI - posicao));
        tempo += 0.1;

    }
    return 0;
}