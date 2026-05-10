/*
O código irá fazer o calculo da distancia entre 
dois pontos de coordenadas(x1,y1) e (x2,y2), eretornará
o resultado encontrado.

- Código feito dia 10/05/2026
*/
//--------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipo da função
float DISTANCIA(float,float,float,float);

int main(){
	float X1, Y1;
	float X2, Y2;
	float distancia;

	printf("Digite o primeiro ponto da distância\n na forma (x,y):");
	scanf("%f %f", &X1,&Y1);

	printf("Digite o segundo ponto da distância\n na forma (x,y):");
	scanf("%f %f", &X2,&Y2);

	distancia = DISTANCIA(X1,Y1,X2,Y2);

	printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é de : %.2f",X1,Y1,X2,Y2,distancia);

	return 0;


}

float DISTANCIA(float x1, float y1, float x2, float y2){
	float result;

	result = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

	return result;
}