// Elaborar um programa que leia uma matriz A de uma
// dimensão com seis elementos do tipo real. Construir uma
// matriz B, em que cada posição de índice ímpar da matriz B
// deve ser atribuída com um elemento de índice par existente
// na matriz A e cada posição de índice par da matriz B deve
// ser atribuída com um elemento de índice ímpar existente na
// matriz A. Apresentar os elementos das duas matrizes.

#include <stdio.h>

int main () {
    float A[6], B[6];
    for (int i = 0; i < 6; i++) {
        printf("Digite valores para A: ");
        scanf("%f", &A[i]);
    }
    for (int i = 1; i < 6; i=i+2) {
        B[i] = A[i-1];      
    }
    for (int i = 0; i < 6; i=i+2) {
        B[i] = A[i+1];      
    }
    printf("\n Valores de A: \n");
    for (int i = 0; i < 6; i++) {
        printf("%f\n",A[i]);
    }
    printf("\n Valores de B: \n");
    for (int i = 0; i < 6; i++) {
        printf("%f\n",B[i]);
    }
    return 0;
}