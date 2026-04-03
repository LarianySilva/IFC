#include <stdio.h>
#include <math.h>

char conc;
int N, A, B, C, D, cont;


int main(){
	printf("Programa de organização de notas\n por conceito");
	printf("9 <= A <= 10 | 8 <= B <= 9| \n 7 <= C <= 8 | D < 7\n");
	printf("***********************\n");

	printf("Quantos alunos esta turma possui?\n");
	scanf("%d", &N);

	cont = 1;
	A = B = C = D = 0;

	while (cont <= N){
		printf("Informe o conceito do %d° aluno\n",cont);
		scanf(" %c",&conc);

		switch(conc){
		case 'A':
			A++;
			break;
		case 'B':
			B++;
			break;
		case 'C':
			C++;
			break;
		case 'D':
			D++;
			break;
		default:
			printf("Conceito invalido\n");
			cont--;

		}
cont++;
	}
	printf("No total de %d alunos temos:\n",N);
	printf("%d aluno(s) com conceito A\n", A);
	printf("%d aluno(s) com conceito B\n", B);
	printf("%d aluno(s) com conceito C\n", C);
	printf("%d aluno(s) com conceito D\n", D);

}