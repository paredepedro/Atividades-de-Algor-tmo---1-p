//  b) Elaborar um programa que leia oito elementos inteiros em
//  uma matriz A do tipo vetor. Construir uma matriz B de
//  mesma dimensão com os elementos da matriz A
//  multiplicados por 3. O elemento B[1] deve ser implicado pelo
//  elemento A[1] * 3, o elemento B[2] implicado pelo elemento
//  A[2] * 3, e assim por diante, até 8. Apresentar a matriz B.

#include <stdio.h>

int main () {
    int A[8],B[0];
    for (int i = 0; i < 8; i++) {
        printf("digite  um número: ");
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 3;
    }
    for (int i = 0; i < 8; i++) {
        printf("%d\n", B[i]);
    }
    return 0;
}