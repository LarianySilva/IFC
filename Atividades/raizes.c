#include <stdio.h>
#include <math.h>
/*
Tendo em mente um algoritmo que calcula as 
raízes de uma equação de II grau, apresente
 um código em linguagem C correspondente.

 - Código feito no dia 03/04/2026
*/
//----------variaveis---------
float a, b, c, x;
float delta, x1, x2;
//----------------------------

int main(){

	printf("Digite os valores dos coeficientes\n a, b e c:\n");
	scanf("%f %f %f",&a ,&b ,&c);

	//calculo de delta utilizado em bhaskara
	delta = (pow(b,2)) - (4 * a * c);

	//verificação da existência de raiz

	if (delta >= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);

		printf("As raizes encontradas : %.2f e %.2f \n",x1 ,x2);
	}
	else{
		printf("Raizes complexas / sem raizes \n");
	}
	return 0;
}