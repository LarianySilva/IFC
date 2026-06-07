/*
O código ,atraves de uma função irá receber três valores e fazer a operação:
(x^2)+y+z e retornara para fora da fuñçaõ soemnte o resultado.

- Código feito dia 10/05/2025;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//protótipo da função,para que ao ser copilado o código espere por ela,
float FUNCAO(float,float,float);

int main(){

	float num1, num2, num3;
	float operacao;

	printf("Digite três valores:\n");
	scanf("%f %f %f",&num1 ,&num2 ,&num3);

	//utilização da função que foi prototipada anteriormente e feita após a main
	operacao = FUNCAO(num1,num2,num3);

	printf("O resultado obtido de (%.2f ^2)+ %.2f + %.2f = %.2f\n",num1,num2,num3,operacao);

}
//função 
float FUNCAO(float n1,float n2,float n3){

	float result;

	result = pow(n1,2) + n2 + n3;

	return result;
}
