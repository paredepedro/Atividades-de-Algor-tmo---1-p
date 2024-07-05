// Elaborar um programa que leia duas matrizes A e B de uma
// dimensão do tipo vetor com dez elementos inteiros cada.
// Construir uma matriz C de mesmos tipo e dimensão que
// seja formada pelo quadrado da soma dos elementos
// correspondentes nas matrizes A e B. Apresentar os
// elementos da matriz C

#include <stdio.h>
#include <math.h>
int main () {
    int A[10],B[10],C[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para A: ");
        scanf("%d",&A[i]); 
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para B: ");
        scanf("%d",&B[i]); 
    }
    for (int i = 0; i < 10; i++) {
        C[i]=pow((A[i]+B[i]),2);
    }
    printf("\n---Elementos de C---\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n",C[i]);
    }
    return 0;
}