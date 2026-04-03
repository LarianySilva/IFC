#include <stdio.h>
#include <stdlib.h>

int n1, n2, pont;

int main(){

	printf("Digite o primeiro valor:\n");
	scanf("%d",&n1);

	printf("Digite o segundo valor:\n");
	scanf("%d",&n2);

	if(n1 == n2){
		printf("Valores iguais, digite valores diferentes\n");
		exit(0);
	}
	if (n1>n2)
		{
			pont = n1;
			n1 = n2;
			n2 = pont;
		}
printf("O ordenamento crenscente é: %d, %d \n", n1, n2);
exit(0);

}