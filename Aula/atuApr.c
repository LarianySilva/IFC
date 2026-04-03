#include <stdio.h>
#include <stdlib.h>

//Se o aluno alcançou aprovação com a 
//nota e frequencia delimitada

float nFinal, frequencia;

int main(){
	printf("Digite a nota final do aluno:\n");
	scanf("%f",&nFinal);

	printf("Digite a frequencia dele em percentual.\n");
	scanf("%f", &frequencia);

	/*if (nFinal > 7.0 && frequencia >= 75)
	{
		printf("Aluno Aprovado\n");
	}
	else{
		printf("Aluno reprovado\n");
	}*/

	if (nFinal >= 7.0 || frequencia >= 75)
	{
		printf("Aluno aprovado\n");
	}
	else{
		printf("Aluno reprovado\n");
	}
	return 0;
}