#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	FILE  *arquivo1;
	FILE *saida;

	char file1[50];
	double x0,xf,t1,t2,t3;
	double deltax,tm,desv1,desv2,desv3;

	printf("Digite o nome do arquivo que deseja acessar:\n");
	scanf("%s",file1);

	arquivo1 = fopen(file1,"r");
	saida = fopen("saida1.dat","w");

	if(saida == NULL){
		printf("Arquivo não foi criado,ERRO!!\n");
	}else{
		printf("Arquivo criado com sucesso\n");
	}

	if(arquivo1 ==NULL){
		printf("Arquivo não encontrado,ERRO!!\n");
		return 0;
	}

	printf("\t Xo \t Xf \t Tm \t Des1 \t Des2 \t Des3 \t\n");

	while(fscanf(arquivo1,"%lf %lf %lf %lf %lf",&x0,&xf,&t1,&t2,&t3)!=EOF){
		tm = (t1+t2+t3)/3;

		desv1 = fabs(tm - t1);
		desv2 = fabs(tm - t2);
		desv3 = fabs(tm - t3);

		deltax = xf-x0;

		printf("\t %.1lf \t %.1lf \t %.3lf \t %.3lf \t %.3lf \t %.3lf \t\n",x0,xf,tm,desv1,desv2,desv3);

	   fprintf(saida,"\t %lf \t %lf \t\n",deltax,tm);
	}
	fclose(arquivo1);
	fclose(saida);

	
	return 0;
}