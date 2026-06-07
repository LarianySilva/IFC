/*
O código irá receber duas matrizes 3x3
e realizar a soma dessas duas matrizes
- Código feito dia 10/05/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[3][3];
	int B[3][3];
	int soma[3][3];
	int i,j;

	//Primeira matriz
	printf("Digite os elementos da primeira amtriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

			printf("Elemento [%d][%d]:\n",i,j);
			scanf("%d",&A[i][j]);//leitura do elemento solicitado
		}
	}

	//segunda matriz
	printf("Digite os elementos da segunda matriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

			printf("Elemento [%d][%d]:\n",i,j);
			scanf("%d",&B[i][j]);//leitura do elemento solicitado
		}
	}

	//construçaõ da matriz resultado da soma
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma[i][j]= A[i][j] + B[i][j];//realiza a soma de matrizes
		}
	}
	printf("Resultado da soma de matrizes:\n");
	//exibição do resultado
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",soma[i][j]);
		}
		printf("\n");
	}

}
