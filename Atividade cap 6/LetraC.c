// Escrever um programa que leia duas matrizes
//  (denominadas A e B) do tipo vetor com 20 elementos reais.
//  Construir uma matriz C, sendo cada elemento da matriz C a
//  subtração de um elemento correspondente da matriz A com
//  um elemento correspondente da matriz B, ou seja, a
//  operação de processamento deve estar baseada na
//  operação C[I] ← A[I] – B[I]. Ao final, apresentar os
//  elementos da matriz C.

#include <stdio.h>

int main () {
    float A[20], B[20], C[20];
    for (int i = 0; i < 20; i++) {
        printf("Digite um valor para A: ");
        scanf("%f",&A[i]);
        printf("Digite um valor para B: ");
        scanf("%f",&B[i]);
        C[i] = A[i] - B[i];
    }
    for (int i = 0; i < 20; i++) {
        printf("%.2f\n",C[i]);
    }
    
    return 0;
}