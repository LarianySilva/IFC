#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//definindo pi
#define _USE_MATH_DEFINES

double x, xR;
double cosseno = 0.0;
double seno = 0.0;
double tangente = 0.0;

//nesse caso será feita a converção de radianos para graus
// graus = rad *(180/pi)
//rad = graus * (pi/180)

//Função de converção de graus para radianos
double grauRad(double grau){
    return grau * (M_PI / 180.0);
}

int main(){
printf("Digite um valor:\n");
scanf("%lf",&x);

//uso da função de converção
xR = grauRad(x);

seno = sin(xR);
cosseno = cos(xR);
tangente = tan(xR);

printf("O valor do seno de %lf = %.2lf\n",xR,seno);
printf("O valor do cosseno de %lf = %.2lf\n",xR,cosseno);
printf("O valor da tangente de %lf = %.2lf\n",xR,tangente);

}