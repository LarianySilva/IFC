#include <stdio.h>
#include <stdlib.h>

//estrutura de seleção multipla

char opcao;

int main(){
	printf("Responda a pergunta com (s) para sim e (n) para negativo\n");
	printf("Eres de maior idade?\n");
	scanf("%c",&opcao);

	switch(opcao){
	case 's':
		printf("Sim cheguei a maior idade\n");
		break;
	case 'n':
		printf("Ainda estou longe da maior idade\n");
		break;
	default:
		printf("Responda conforme o instruido\n");
	}
}