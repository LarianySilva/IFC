/*
O código irá ler as notas em uma arquivo
e calcular a média e gerar outro arquivo com as 
médias e com a sinalização se o aluno foi aprovado
ou reprovado.

- Código feito dia 13/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivDado;
	FILE *arquivResult;

	//variaveis por armazenar os valores lidos
	//e que serão escritos.
	float ab1, ab2;
	float media;

	arquivDado = fopen("notas.txt","r");
	arquivResult = fopen("media.txt", "w");

	//verifica a existência do arquivo com as notas
	if (arquivDado == NULL) {
        printf("Erro: O arquivo nao foi encontrado!\n");
        return 1;
    }
    else{
    	printf("Segue o baile\n");
    }

    //Laço de repetição responsavel por ler as notas no arquivo
    //com as AB'S, calcular a média geral e escrever no segundo arquivo
    //de médias.
    fprintf(arquivResult, "Media \t Estado de rendimento \n");
    fprintf(arquivResult, "---------------------------\n");

    while(fscanf(arquivDado, "%f %f", &ab1, &ab2)!=EOF){
    	media = (ab1 + ab2)/2;

    	if(media >= 7.0){
    		//caso o aluno alcance a aprovação
    		fprintf(arquivResult, "%.1f\t AP \n",media);
    	}
    	else{
    		//caso o contrário.
    		fprintf(arquivResult,"%.1f\t RP\n",media);
    	}
    }
    fclose(arquivDado);
    fclose(arquivResult);

    printf("Arquivo 'media.txt' criado\n");
}