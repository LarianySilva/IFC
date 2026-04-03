/*
 Utilizando a estrutura de repeti¸c˜ao com teste no in´ıcio (“repita-enquanto”), 
 elabore um código em linguagem C para tabelar a fun¸c˜ao y = x
2, com x variando de 0 a 10.
 O valor do incremento de x (∆x) dever´a ser informado pelo usu´ario.

- Código feito dia 03/04/2026
*/
#include <stdio.h>

float dx, y;
float x = 0;

int main(){
	printf("Digite um valor a ser incrementado:\n");

	if (scanf("%f", &dx) != 1 || dx <= 0) {
        printf("Digite um numero positivo maior que zero.\n");
        return 1;
    }
	//estrutura repita-enquato (do-while)

	do{
		y = x * x;
		printf("%.2f \t | \t %.2f \n", x, y);//tabela
		x += dx;
	}
	while(x<=10.001);

	return 0;
}