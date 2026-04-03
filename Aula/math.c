#include <stdio.h>
#include <math.h>

double x;
double raizQ = 0.0;
double potencia = 0.0;

int main(){
	printf("Digite um valor:\n");
	scanf("%lf", &x);

	raizQ = sqrt(x);
	potencia = pow(x,2);

	printf("O resultado da raiz quadrada é: %.2lf \n",raizQ);
	printf("O resultado da potencia é: %.2lf \n",potencia);
}