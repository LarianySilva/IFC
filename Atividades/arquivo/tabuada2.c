/*
Atualização para gerar a tabuada com 
a escolah do usuario.

- Código feito dia 10/05/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//criação do ponteiro
	FILE* tabuada;

	int i;
	int n = 0;

	//criação do arquivo que vai armazenar a tabuada
	tabuada = fopen("tabuada2.txt","w");

	//verificação se o arquivo foi criado
	if(tabuada == NULL){
		printf("Arquivo não encontrado!");
		return 1;
	}

	//solicitãção de qual tabuada construir
    printf("Digite qual tabuada deseja criar:\n");
    scanf("%d",&n);

    //cabeçalho
    fprintf(tabuada, "SOMA (%d) \t MULT (%d)\n",n,n);
    fprintf(tabuada, "----------\t----------\n");

    //laço de repetição que vai gerar a tabuada do valor socilitado de 0 - 10
    for (i = 0; i <= 10; i++) {
        int soma = n + i;
        int mult = n * i;

        // Escreve no arquivo: 
        // n + %d = %d  | n x %d = %d 
        fprintf(tabuada, "%d + %d = %d \t %d x %d = %d\n",n, i, soma,n, i, mult);
    }

    //fecha o arquivo
    fclose(tabuada);

    //aviso
    printf("Arquivo criado com sucesso ;)\n");
    return 0;

}