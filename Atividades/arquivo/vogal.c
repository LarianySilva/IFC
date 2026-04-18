/*
O código vai ler um arquivo com algum texto
e vai ler cada letra do texto do arqivo e detectar 
as vogais presentes nele,contar e apresentar a 
quantidade alí presente.

A biblioteca ctype.h contém declarações para manipulação de caracteres,
nisso foi usado o:

-fgetc = percorre as letras do texto;
-tolower = converter as letras do texto 
           em letras minusculas,afim de 
           facilitar na hora de verificar
           a vogal.

- Código feito dia 18/04/2026.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	//ponteiro
	FILE *arquivo;

	//leitura do texto
	arquivo = fopen("texto.txt","r");

	//variaveis de armazenamento
	char letra;
	int vogal = 0;

	//verificação da existência do arquivo
	if(arquivo == NULL){
		printf("ERRO! Arquivo não encontrado\n");
	}
	else{
		printf("Tudo certo\n");
	}

	//nesse caso o laço irá percorrer cada letra do que foi digitado
	// com o fgetc
	while((letra = fgetc (arquivo))!=EOF){

		//vai transformar as letras maiusculas em minusculas padronizando tudo
		char mini = tolower(letra);

		//verificação da existência de vogais e contabilizando
		if(mini == 'a'|| mini =='e'|| mini =='i'|| mini =='o'|| mini =='u'){
			vogal ++;
		}
	}
	//mostra no terminal a quantidade de vogais existentes no arquivo
	printf("O arquivo possui %d vogais",vogal);
	fclose(arquivo);

	return 0;
}