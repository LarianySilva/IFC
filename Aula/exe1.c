#include <stdio.h>
#include <stdlib.h>
/*
Programa para calcular o valor médio de 
          valores informados
*/

double n1, med;
int cont, N;

int main(){
	printf("O programa vai calcular o valor medio\n de valores informados.\n");
	printf("Quantos valores deseja informar?\n");
	scanf("%d",&N);

	med = 0.0;

	for(cont = 1; cont <=  N; cont++){

	/*
	Nessa estrurura ele vai receber valores até alcançar 
	a quantidade anteriormente informada. Após isso armazenará 
	a soma desses valores na variavel med,ate a estrutura de 
	repetição ser verdadeira.
	*/
		printf("Informe o %d ° número\n",cont);
		scanf("%lf",&n1);
		med += n1;
	}

//media = soma dos valores informados / quantidade de n° a ser somados.
	med = med/N;

	printf("O valor medio dos valores informados é %.2lf\n",med);
	return 0;
}