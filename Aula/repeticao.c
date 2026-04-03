#include <stdio.h>
#include <stdlib.h>

//será feito um contador ate certo valor
int n1, cont;

int main(){
	printf("Ate que valor deseja contar?\n");
	scanf("%d",&n1);

	//inicialização da variavel
	//cont = 0;

	//condição´para que a estrutura de repetição 
	//continue sendo executada.

//-------------WHILE--------------------------------
	/*while (cont <= n1){
		printf("%d, ",cont);
		cont++;
	cont = cont +1
	a estrutura sera executada até que a condição seja verdadeira
	caso deixe de ser verdade ela parará.
	}*/

//------------DO WHILE--------------------------------
	/*do{
		printf("%d ,",cont);
		cont++;
	}
	while(cont <= n1);*/

//-------------FOR------------------------------------
for(cont = 1; cont <= n1; cont++){
	printf("%d ",cont);

/*
Nessa estrutura,sua condicional já traz:
  - A inicialização da variavel;
  - Até o que ser verdadeiro ela será executada;
  - O que será feito.
*/
}



}