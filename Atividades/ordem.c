/*
Tendo em mente um algoritmo que recebe 3
 n´umeros e informa qual o maior entre eles,
apresente um c´odigo em linguagem C correspondente.

- Código 03/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

//---variaveis-------------
float n1, n2, n3;
//-------------------------

int main(){

	printf("Digite 3 valores diferentes:\n");
	scanf("%f %f %f", &n1, &n2, &n3);

	if (n1 >= n2 && n1 >= n3)
	{
		printf("O maior valor é (%.2f)\n", n1);
	}
	else if (n2 >= n1 && n2 >=n3)
	{
		printf("O maior valor é (%.2f)\n", n2);
	}
	else{
		printf("O maior valor é (%.2f)\n", n3);
	}
return 0;
}