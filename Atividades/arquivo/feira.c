/*
O  código vai ler uma lista de compras,
com seus itens e respectivos preços e,em 
seguida apresentar o preço total a ser pago.

- Código feito dia 18/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	//ponteiro
     FILE *compras;

    //leitura do arquivo
    compras = fopen("compras.txt","r");

    //variaveis que irão armazenar as info. lidas
    char produto[35];
    int unidade;
    float valorU, valorT;
    float total = 0; //total a ser pago.


    //Verifica a existência do arquivo
    if(compras == NULL){
    	printf("ERRO! Arquivo não encontrado!");
    }
    else{
    	printf("Tudo certo, prossiga.");
    	system("cls");
    }

    //organização da lista lida no terminal
    //esse %-15 vai dar os espaçamentos na lista para a questão visual
    //tendo que ser os mesmos valores também bos produtos.
    printf("%-15s %-10s %-15s %-15s\n", "Produto", "Unid.", "Val. Unit.", "Val. Total");

    //laço que irá ler e pegar as informações do arquivo até o fim do mesmo
    while(fscanf(compras,"%s %d %f %f",produto,&unidade,&valorU,&valorT)!=EOF){
    	total += valorT;

    	//irá imprimir os itens com o espaçamento indicado
    	printf("%-15s %-10d R$ %-12.2f R$ %.2f\n", produto, unidade, valorU, valorT);
    }
    printf("----------------------------------------------------\n");
    printf("Total da Compra : %.2f\n",total);

    fclose(compras);
    return 0;
}