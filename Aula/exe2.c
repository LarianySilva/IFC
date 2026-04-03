#include <stdio.h>
#include <math.h>

int N, A, B, C, D, cont;
double n1;

int main(){
	printf("Programa de organização de notas\n por conceito");
	printf("9 <= A <= 10 | 8 <= B <= 9| \n 7 <= C <= 8 | D < 7\n");
	printf("***********************\n");

	printf("Quantos alunos esta turma possui?\n");
	scanf("%d", &N);

	for(cont = 1; cont <= N; cont++){
		printf("Informe a nota do %d° aluno\n",cont);
		scanf("%lf",&n1);

		if(n1 <= 10. && n1 >= 9.){
			A++;
		}
		if(n1 <= 9. && n1 >= 8.){
			B++;
		}
		if(n1 <= 8. && n1 >= 7.){
			C++;
		}
		if(n1 <= 7. && n1 >= 0.){
			D++;
		}
		if(n1 > 10. || n1 < 0.){
			printf("Nota invalida");
			cont--;
		}
	}
	printf("No total de %d alunos temos:\n",N);
	printf("%d aluno(s) com conceito A\n", A);
	printf("%d aluno(s) com conceito B\n", B);
	printf("%d aluno(s) com conceito C\n", C);
	printf("%d aluno(s) com conceito D\n", D);

}

