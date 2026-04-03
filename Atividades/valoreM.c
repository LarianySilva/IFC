/*
Algoritmo que lê dois valores inteiros e apresente
 a diferença do maior pelo menor,apresente um código 
 em linguagem C correspondente.

- Código feito no dia 03/04/2026.
*/
#include <stdio.h>
#include <stdlib.h>

//-----variaveis usadas-------
int a, b, dif;

// dif = diferença de valores
//----------------------------

int main(){
	printf("Digite dois valores inteiros:\n");
	scanf("%d %d", &a, &b);

	
	if ( a > b)
	{
		dif = a - b;
		printf("A diferença do maior para o menor é: %d\n", dif);
	}
	if (a < b)
	{
		dif = b - a;
		printf("A diferença do maior para o menor é: %d\n", dif);
	}
	else{
		printf("Valores iguais,digites valores diferente.\n");
		}
	return 0;
}
