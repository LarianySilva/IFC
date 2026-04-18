/*
O código irá ler informações de dois 
arquivos diferentes e gerar um terceiro 
que deve conter as informações lidas.

- Código feito dia 18/04/2026.
optei por um de nome e outro de idade.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	//criação do ponteiro
	FILE *nome;
	FILE *idade;
	FILE *arquivo;

	char alcunha[26];
	int era;

	//arquivos que terão as informações
	//lidas
	nome = fopen("nome.txt","r");
	idade = fopen("idade.txt","r");

	//arquivo que armazenará a junção de 
	//informções
	arquivo = fopen("dados.txt","w");

	//Verifica a existência dos dois arquivos
	if(nome == NULL || idade == NULL){
		printf("ERRO! Arquivo não encontrado");
	}
	else{
		printf("Arquivo detectado,prossiga.");
		system("cls");
	}

	 fprintf(arquivo, "Nome \t Idade \n");
    fprintf(arquivo, "-----------------\n");

    //O laço de repetição irá pegar as informações até o fim do arquivo
	while (fscanf(nome, "%25s", alcunha) != EOF && fscanf(idade, "%d", &era) != EOF) {

		//vai imprimir no arquivo as informações lidas e imprimir no aquivo de dados 
        fprintf(arquivo, "%-15s \t %d \n", alcunha, era);
    }

    //Fecha os arquivos lidos e gerado
	fclose(idade);
	fclose(nome);
	fclose(arquivo);

	//confirmação que o arquivo foi gerado
	printf("Rodou pai ;)\n");

return 0;
}