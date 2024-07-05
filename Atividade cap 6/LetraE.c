//  Elaborar um programa que leia uma matriz A do tipo vetor
//  com 15 elementos inteiros. Construir uma matriz B de
//  mesmo tipo, e cada elemento da matriz B deve ser o
//  resultado da fatorial correspondente de cada elemento da
//  matriz A. Apresentar as matrizes A e B.

#include <stdio.h>

int main () {
    int A[15], B[15], c, f=1;
    for (int i = 0; i < 15; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d",&A[i]);
        c = A[i];
        while (c>0)
        {
            f = f * c;
            c--;
        }
        B[i] = f;
        f=1;
    }
    for (int i = 0; i < 15; i++) {
        printf("\n%d", B[i]);
    }
    return 0;
}