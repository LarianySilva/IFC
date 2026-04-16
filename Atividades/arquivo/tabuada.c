/*
Código responsável por gerar uma 
tabuada de oma e multiplicação por 5,
onde será gerado um arquivo com a tabela dessas duas tabuadas
podendo ser um .txt ou .dat.

-Código feito 15/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

int n;
int main(){
	//ponteiro
	FILE *arquivo;

	//gera o arquivo
	arquivo = fopen("tabuada.txt","w");

	//irá gerar uma estrutura meramente ilustrativa da tabela
	fprintf(arquivo, "Soma \tMult \n");
    fprintf(arquivo, "---------------------------\n");
//--------------------------------------------------------------------------
    //laço de repetição responsável por 
    //gerar os valores da tabuada
    /*
    for(int i = 0 ; i <= 10; i++){
    	int soma = 5 + i;
    	int mult = 5 * i;

    	//organiza os valores gerados,lembrar de chamar o arquivo
    	fprintf(arquivo,"%d \t \t %d \n",soma, mult);
    }
    fclose(arquivo);
    */
    //notifica sobre a criação do arquivo
    //printf("Arquivo gerado com sucesso!\n");
//--------------------------------------------------------------------------
    //e se no lugar de 5 usar um valor fornecido pelo usuario?

    printf("Digite qual tabuada deseja calcular a soma e multiplicacao:\n");
    scanf("%d",&n);

    for(int i = 0; i <= 10; i++){
    	int soma = n + i;
    	int mult = n * i;

    	fprintf(arquivo,"%d \t \t %d \n",soma, mult);

    }
    fclose(arquivo);
    printf("Arquivo gerado com sucesso!\n");
    return 0;


} 
