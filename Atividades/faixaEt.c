/*
Desenvolva um um c´odigo em linguagem C para 
ler o nome e a idade de um indiv´ıduo
e imprimir “criança”, se a idade for
 menor ou igual a 13 anos, “adolescente”, no caso
de idade estar entre 13 e 20 anos, e “adulto”,
 se for mais velho.

- Código feito 03/04/2026
*/
#include <stdio.h>

int idade;
char nome[17];

int main(){
	printf("Digite seu nome:\n");
	scanf("%17s", nome); //%17s - limita a quantidade de caracteres exibidos

	printf("Digite sua idade em anos:\n");
	scanf("%d", &idade);

	//verificação da faixa etária
	
	if (idade <= 13)
	{
		printf("%s eres uma crianca.\n", nome);
	}
	else if(idade > 13 && idade <= 20){
		printf("%s eres um adolescente\n", nome);
	}
	else{
		printf("%s eres adulto\n",nome);
	}
return 0;
}