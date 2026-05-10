/*
O codigo irá gera uma arquivo com a tabuada de soma e 
multiplicação do 5.

- Código refeito dia 10/05/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de um ponteiro 
    FILE *arquivo;
    int i;
    int numero = 5;

 
    // cria o arquivo
    arquivo = fopen("tabuadas.txt", "w");

    // Verifica se o arquivo foi criado
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1; // Encerra o programa com erro
    }

    // Cabeçalho
    fprintf(arquivo, "SOMA (5) \t MULT (5)\n");
    fprintf(arquivo, "----------\t----------\n");

    // Laço de 0 até 10 para gerar as operações
    for (i = 0; i <= 10; i++) {
        int soma = numero + i;
        int mult = numero * i;

        // Escreve no arquivo: 
        // %d + %d = %d (coluna 1) | %d x %d = %d (coluna 2)
        fprintf(arquivo, "5 + %d = %d \t 5 x %d = %d\n", i, soma, i, mult);
    }

    // Fecha o arquivo
    fclose(arquivo);

    //aviso
    printf("Arquivo 'tabuadas_do_5.txt' gerado com sucesso!\n");

    return 0;
}