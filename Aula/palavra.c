#include <stdio.h>

char nome[15], adjetivo[15];

int main(){
   printf("Digite um nome:\n");
   scanf("%s", nome);

   printf("Digite um adjetivo para o nome escolhido:\n");
   scanf("%s", adjetivo);

   printf("O nome : %s ,recebeu o adjetivo de %s",nome ,adjetivo);

   return 0;	
}