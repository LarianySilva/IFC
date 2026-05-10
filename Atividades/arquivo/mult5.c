/*
 O código ira fazer a leitura de uma matriz 3x3
e multiplicar seus elementos por 5. Ao finalizr esse
processo ele deverá imprimir o resultado.

- Código feito dia 26/04/2026.
*/
 
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float matrix[3][3];//matriz
    float resultado;//armazenrar o resultado da multiplicação
    
    //solicita os elementos da matriz ao usuario
    printf("Digite os elementos da matriz:\n");
    
    
    /*
     Sera feuta a leitura do elemento de usuario ate que:
    - a quantidade de linhas(i) seja < 3(valor estabelecido;
    - as colunas não estejam preenchidas (j);
     */
    
    for(int i=0;i<3;i++){     //linha
        for(int j=0;j<3;j++){ //coluna
            //leitura do elemento e construção da matriz
            //com eles.
            scanf("%3f",&matrix[i][j]);
        }
    }
    //----------------------------------------------------
    
    /*
     Ja agora sera feita amultiplicação dos elemntos da
    matriz,onde enquanto existir elementos em cada linha 
    e ,consequentemente, coluna que ainda não foi mult. ele
    continuara sendo executado.
    */
    
    for(int i=0;i<3;i++){      //linhas
        for(int j=0;j<3;j++){  //colunas
            resultado = matrix[i][j] * 5; //multiplicação
            printf("%8.1f",resultado);    //resultado no terminal
        }
        printf("\n");//pula a linha para separar cada linha da matriz
    }
    return 0;
}