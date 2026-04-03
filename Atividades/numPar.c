#include <stdio.h>
/*
Tendo em mente um algoritmo 
que computa todos os n´umeros pares de um a 100,
apresente um um c´odigo em 
linguagem C correspondente.

- Código feito em 03/04/2026
*/
int main(){
	// Laço de repetição que começa em 2 e vai até 100
	for (int i = 2; i <= 100; i += 2)
	{
		printf("%d ", i);	
	}
	
	return 0;
}