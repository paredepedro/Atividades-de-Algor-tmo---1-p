// Escrever um programa que leia três matrizes (A, B e C) de
// uma dimensão do tipo vetor com cinco elementos cada que
// sejam do tipo real. Construir uma matriz D, sendo esta o
// resultado da junção das três matrizes (A, B e C). Desta
// forma, a matriz D deve ter o triplo de elementos das
// matrizes A, B e C, ou seja, 15 elementos. Apresentar os
// elementos da matriz D

#include <stdio.h>

int main () {
    float A[5], B[5], C[5], D[15];
    for (int i = 0; i < 5; i++) {
        printf("Digite valores para A: ");
        scanf("%f",&A[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite valores para B: ");
        scanf("%f",&B[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite valores para C: ");
        scanf("%f",&C[i]);
    }
    
    for (int i = 0; i < 15; i++) {
        if(i<5){
            D[i]=A[i];
        }else if(i<10){
            D[i]=B[i-5];
        }else if(i<15){
            D[i]=C[i-10];
        }
    }
    for (int i = 0; i < 15; i++) {
        printf("\n%.2f",D[i]);
    }
    return 0;
}