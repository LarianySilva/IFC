/*
Código em linguagem C que calcule o valor 
médio de um conjunto de números reais

- Código feito dia -03/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

int n;
float num, med;

int main(){
	//inicialização da variavel
	med = 0;

	printf("Quantos valores deseja fazer a media?\n");
	scanf("%d", &n);

	//estrutura de repetição que receberá e
	//fará a soma dos valores informados
	for (int i = 1; i <= n; ++i)
	{
		printf("Digite o valor %d:", i);
		scanf("%f", &num);

		//soma
		med = med + num;
	}
	// calculo da média 
	med = med / n;

	printf("A media sera: %.2f", med);
	return 0;
}

