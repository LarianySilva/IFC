/*
Código para escrever uma sequência de Fibonacci 
até um determinado número de valores que irá compor a 
sequência.

- Código feito dia 03/04/2026
*/
#include <stdio.h>
#include <math.h>

int soma, n;
int a, b;

int main(){
	a = 0;
	b = 1;

	printf("Digite quantos termos tera na sequencia:\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		printf("%d ",b);
		soma = a + b;
		a = b; // o valor atual da sequencia se torna o anterior apos a soma ser realizada;
		b = soma; // o proximo numero se torna o da soma com o anterior

	}
	return 0;
}