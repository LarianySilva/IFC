#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	FILE  *arquivo1;//ponteiro do arquivo que será lido
	FILE *saida;//ponteiro do arquivo que seá criado

	//variaveis utilizadas ---------------------------------------
	char file1[50];
	double x0,xf,t1,t2,t3;
	double deltax,tm,desv1,desv2,desv3;
	//------------------------------------------------------------

	printf("Digite o nome do arquivo que deseja acessar:\n");
	scanf("%s",file1);

	//abertura para a leitura do arquivo informado e de um novo arquivo
	arquivo1 = fopen(file1,"r");
	saida = fopen("saida1.dat","w");
	//----------------------------------------------------------------

	//verificação da criação do arquivo e da existência do que foi informado
	if(saida == NULL){
		printf("Arquivo não foi criado,ERRO!!\n");
	}else{
		printf("Arquivo criado com sucesso\n");
	}

	if(arquivo1 ==NULL){
		printf("Arquivo não encontrado,ERRO!!\n");
		return 0;
	}
	//------------------------------------------------------------------------

	printf("\t Xo \t Xf \t Tm \t Des1 \t Des2 \t Des3 \t\n");

	//laço responsável pela leitura dos dados do arquivo linha a linha que tiver informação
	while(fscanf(arquivo1,"%lf %lf %lf %lf %lf",&x0,&xf,&t1,&t2,&t3)!=EOF){
		tm = (t1+t2+t3)/3;//tempo médio

		//desvios de tempo-----
		desv1 = fabs(tm - t1);
		desv2 = fabs(tm - t2);
		desv3 = fabs(tm - t3);
		//---------------------
		deltax = xf-x0;//deslocamento

		printf("\t %.1lf \t %.1lf \t %.3lf \t %.3lf \t %.3lf \t %.3lf \t\n",x0,xf,tm,desv1,desv2,desv3);

		//escreve os dados de deslocamento e tempo médio para cada
		//deslocamento em um arquivo separado
	   fprintf(saida,"\t %lf \t %lf \t\n",deltax,tm);
	}
	//fechamento dos arquivos que foram abertos anteriormente
	fclose(arquivo1);
	fclose(saida);
	//-------------------------------------------------------

	
	return 0;
}