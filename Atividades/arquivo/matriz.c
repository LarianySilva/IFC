/*
O código a seguir irá fazer a leitura de uma 
matriz quadrada 3x3 e multiplicar seus 
elementos por 5.Ao finalizar o processo ira
imprimir o resultado.

- código feito dia 09/05/2026.
*/

#include <stdio.h>
#include <stdlib.h>

int i, j;
int matriz[3][3];//matriz onde serão armazenados 
                 //os dados recebidos pelo usuário

int main(){

	printf("Digite os elementos da matriz 3X3:\n");

	/*
	Aqui o laço for fará o recebimento de dados pelo
	usuário enquanto ainda houve linhas e,consequentemente
	,columas sem elementos.E tendo em vista que numa matriz
	o primeiro elemnto tem indice 0, a condicional de 
	comparação deverá ser com i<3 e j<3,pois se for colocado 
	i<=3 e j<=3, isso acbará resultando em uma matriz 4X4,o que não 
	é o objetivo.

	Não foi mostardo o resultado da matriz antes
	da multiplicação por não ser o objetivo centarl do codígo.
	*/
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Elemento [%d][%d]:\n",i,j);
			//pede o elemento sinalizando a linha e a
			//coluna onde ele ficará

			scanf("%d",&matriz[i][j]);
			//leitura do elemento digitado

		}
	}

	//construção da matriz com os elementos informados
	printf("Matriz antes de multiplicar por 5:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");//pular linha da matriz.
	}
		
	printf("Resultado da após multiplicar:\n");

	// írá se repetir até multiplicar cad elemento da matriz por 5
	//e no fim mostrar.
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matriz[i][j]*5);//resultado com a multiplicação.
		}
		printf("\n");//pular linha da matriz
	}
	return 0;
}
