#include <stdio.h>
#include <stdlib.h>

int v1, v2;
int soma, mult, Rdiv, sub;
int resto;

int main(){

	printf("Testando Operadores\n");
	printf("Digite o primeiro valor desejado:\n");
	scanf("%d",&v1);

	printf("Digite o segundo valor desejado:\n");
	scanf("%d", &v2);

	soma = v1 + v2;
	printf("\n O resultado da Soma é: %d",soma);

	sub = v1 - v2;
	printf("\n O resultado da Sulbtracao é: %d",sub);

	mult = v1 * v2;
	printf("\n O resultado da Multiplicacao é: %d",mult);

	Rdiv = v1 / v2;
	printf("\n O resultado da Divisao é: %d",Rdiv);

	resto = v1 % v2;
	printf("\n O resultado do Resto é: %d",resto);

}