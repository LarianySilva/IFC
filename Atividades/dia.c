/*
Tendo em mente um algoritmo que lˆe a idade de uma pessoa expressa em anos e
mostra quantos h´a quantos dias a pessoa est´a viva, apresente um c´odigo em linguagem
C correspondente. (OBS: Leve em considera¸c˜ao o ano com 365 dias e o mˆes com 30).

- Código feito dia 03/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

//-----variaveis--------------
char nome[18];
float idade, dias, ano;
//----------------------------

int main(){
	printf("Digite um nome com ate 18 caracteres:\n");
	scanf("%18s", nome);

	printf("Digite sua idade (em anos):\n");
	scanf("%f", &idade);

	ano = 365;
	dias = idade * ano;

	printf("Prazer %s ,estais vivo(a) a %.2f dias.\n", nome, dias);

	return 0;
}