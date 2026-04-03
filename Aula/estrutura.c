#include <stdio.h>
#include <stdlib.h>

float n1, n2, med;

int main(){
	printf("Informe a primeira nota:\n");
	scanf("%f",&n1);

	printf("Informe a segunda nota:\n");
	scanf("%f",&n2);

	med = (n1 + n2)/2.0;

	if (med >= 7.0)
	{
		printf("Aluno aprovado");
	}
	else
	{
		printf("Aluno reprovado\n");
	}
	return 0;
}