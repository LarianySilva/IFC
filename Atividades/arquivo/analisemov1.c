#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo;

	FILE *arq1;
	FILE *arq2;

	char file1[50];
	double x0,xf,t1,t2,t3;
	double tm,deltax,vel,acel;

	printf("Digite o nome do arquivo que deseja acessar:\n");
	scanf("%s", file1);

	arquivo = fopen(file1,"r");
	arq1 = fopen("grafico1.dat","w");
	arq2 = fopen("grafico2.dat","w");

	if(arquivo == NULL){
		printf("arquivo não encontrado,ERRO!!\n");
		return 0;
	}

	if(arq1 == NULL){
		printf("arquivo 1 não criado!\n");
	}
	if(arq2 == NULL){
		printf("Arquivo 2 não criado!\n");
	}else{
		printf("Arquivos criados com sucesso.\n");
	}

	printf("\t Xo \t Xf \t Tm \t Vel \t Acel \t\n");

	while(fscanf(arquivo,"%lf %lf %lf %lf %lf",&x0,&xf,&t1,&t2,&t3)!=EOF){
		tm = (t1 + t2 + t3)/3.0;
		deltax = xf - x0;

		acel = (2.0 * deltax)/(tm * tm);
		vel = acel * tm;

		printf("\t %.1lf \t %.1lf \t %.3lf \t %.2lf \t %.2lf \t\n",x0,xf,tm,vel,acel);

	//arquivo do gráfico de velocidade versus tempo
		fprintf(arq1, "\t %lf \t %lf \t\n",tm,vel );
	//arquivo de aceleração versus tempo
		fprintf(arq2,"\t %lf \t %lf \t\n",tm,acel);

	}
	fclose(arquivo);
	fclose(arq1);
	fclose(arq2);

	return 0;
}