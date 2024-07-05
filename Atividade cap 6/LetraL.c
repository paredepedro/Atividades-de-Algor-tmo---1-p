// Elaborar um programa que leia uma matriz A do tipo vetor
// com dez elementos inteiros. Construir uma matriz B de
// mesmo tipo, em que cada elemento deve ser a metade
// exata de cada um dos elementos existentes da matriz A.
// Apresentar os elementos das matrizes A e B

#include <stdio.h>

int main () {
    int A[10],B[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite valores para A: ");
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 10; i++) {
        B[i]=A[i]/2;
    }
    printf("\n---Valores de A e B---\n");
    for (int i = 0; i < 10; i++) {
        printf("A:%d --- B:%d\n", A[i], B[i]);
    }
    return 0;
}