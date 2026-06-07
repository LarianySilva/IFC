/*
O código irá receber uma matriz 4x4
e realizar a soma da diagolnal principal 
dessa matriz.

- Código feito dia 10/05/2026
*/

#include <stdio.h>
#include <stdlib.h>
//protótipo da função do cálculo da diagonal

int DIAGONAL(int A[4][4]);

int main(){
	int matriz[4][4];
	int i,j,diagonal;

	printf("Digite os elementos da matriz 4x4:\n");

	//laço que vai executar até todos os elemntos da matriz estiverem 
	//preenchidos.
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){

			printf("Elemento [%d][%d]:\n",i,j);

			scanf("%d", &matriz[i][j]);
		}
	}
	/*
	printf("-----------------------------------------\n");
	//exibição da matriz construida:
	printf("Matriz construída:\n");
	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 4; ++j)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	*/

	diagonal = DIAGONAL(matriz);//realização da soma dos elemntos da
	                            // diagonal com o uso da função.

	printf("\nResultado da soma da diagonal: %d\n",diagonal);

}
//funçaõ que irá fazer a soma
int DIAGONAL(int A[4][4]){
	int i;
	int soma = 0;

	for(i=0;i<4;i++){
			soma += A[i][i];//irá considerar somente os elemento
			                //onde a linha = coluna
	}
	return soma;//irá retornar a operação
}
