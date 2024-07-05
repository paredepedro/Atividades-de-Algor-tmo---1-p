//  Construir um programa que leia duas matrizes A e B do tipo
//  vetor com 15 elementos quaisquer inteiros. Construir uma
//  matriz C, sendo esta o resultado da junção das matrizes A e
//  B. Desta forma, a matriz C deve ter o dobro de elementos
//  em relação às matrizes A e B, ou seja, a matriz C deve
//  possuir 30 elementos. Apresentar a matriz C.

#include <stdio.h>

int main () {
    int A[15], B[15], C[30];

    for (int i = 0; i < 15; i++) {
        printf("Digite um valor para A: ");
        scanf("%d",&A[i]);
        printf("Digite um valor para B: ");
        scanf("%d",&B[i]);
    }
    for (int i = 0; i < 30; i++) {
        if(i<15){
            C[i]=A[i];
        }else{
            C[i]=B[i-15];
        }
    }
    for (int i = 0; i < 30; i++) {
        printf("\n%d",C[i]);
    }
    return 0;
}