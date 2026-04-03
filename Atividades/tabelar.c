/*
 Utilizando a estrutura de repeti¸c˜ao com teste no in´ıcio (“enquanto-fa¸ca”), 
 elabore um código em linguagem C para tabelar a fun¸c˜ao y = x
2, com x variando de 0 a 10.
 O valor do incremento de x (∆x) dever´a ser informado pelo usu´ario.

- Código feito dia 03/04/2026
*/

#include <stdio.h>


float x = 0;
float dx, y; //dx =  valor informado pelo usuario

int main(){
	printf("Digite um valor que sera incrementado:\n");
	scanf("%f", &dx);

	//estrutura enquanto-faça
	while(x <= 10){
		y = x * x;// y = x^2
		printf("%.2f \t | \t %.2f \n", x, y);//tabela

		x += dx; //incremento de x com o valor informado pelo ususario

	}
	return 0;
}