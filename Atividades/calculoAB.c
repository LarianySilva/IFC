/*
Calculo da soma de equações com frações
*/
#include <stdio.h>

int main() {
    double A = 0.0;
    double B = 0.0;
    
  
    /*
    É possível observar que na primeira equação
    ela segue a lógica do numerador aumenta de (2i - 1)
    enquanto seu denominador segue aumentando de 1 em 1

    Já a segunda equação, enquanto o numerador segue
    aumentando de 1 em 1, o denominador aumenta com o 
    quadrado do seu numerado ex.: numerador = 4, logo
    seu denominador será 16.
    */

    //Aplicando essa lógica:

    // Calculo de A: (2i-1)/i
    for (int i = 1; i <= 50; i++) {
    	//irá rodar 50x por conta do 
    	//denominador final observado na equação.
        A +=(double) (2 * i - 1) / i;

    }

    // Calculo de B: i/(i*i)
    for (int i = 1; i <= 10; i++) {
    	//irá rodar até 10,pois o valor
    	//ao quadrado final sua raiz é dez.
        B +=(double) i / (i * i);
        //o double considera as casas decimais com precisão
    }

    printf("A = %.2lf\nB = %.2lf\n", A, B);
    return 0;
}