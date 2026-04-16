#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *pont_arq;
	float n1, n2;
	char nome[20];

	pont_arq = fopen("arquivoN.txt", "w");

	printf("Escreva valores nobre:\n");
	scanf("%f %f", &n1, &n2);
	fprintf(pont_arq,"%f %f \n",n1,n2);

	printf("Digite um nome:\n");
	scanf("%s",nome);

	fclose(pont_arq);

	pont_arq = fopen("arquivoN.txt", "r");
	fscanf( pont_arq, "%f %f %s", &n1,&n2, nome);

	printf("%f %f %s \n",n1, n2,nome);

	fclose(pont_arq);
} 