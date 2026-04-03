/*
O código a seguir irá receber a quantidade de 
itens comprada ,mostrar o preço e pedir a forma
de pagamento.

- Código 03/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

char opcao;
int itens, parcelas;
float preco, total = 0.0;

int main(){
	printf("Digite a quantidade de itens comprados:\n");
	scanf("%d",&itens);

//Preço dos itens comprados pelo usuario
	// a estrutura de repetição ira rodar até 
	//a quantidade de itens dita anteriormente seja atendida

	for(int i = 0; i < itens; i++){
		printf("Digite o preco do item %d: ",i+1);
		scanf("%f", &preco);

		//total da compra antes de parcelar
		total += preco;
	}

	printf("Total da compra: %.2f\n", total);
	printf("Digite a forma de pagamento:\n");

//---------------- Opção de pagamento ------------------
	printf("A - A vista , B - A prazo\n");
	scanf(" %c", &opcao);

	switch(opcao){
	case 'A':
		printf("Pagamento feito a vista, total pago: %.2f .",total);
		break;
	case 'B':
		printf("Digite em quantas vezes vai parcelar:\n");
		scanf("%d", &parcelas);

		total = total / parcelas;

		printf("Sua compra parcelada em %d vezes\n ficou com o valor de %.2f para cada parcela.\n", parcelas,total);
		break;
	default:
		printf("Escolha fora do instruido, se atente as opcoes.");
	}
//-------------------------------------------------------
	return 0;
}