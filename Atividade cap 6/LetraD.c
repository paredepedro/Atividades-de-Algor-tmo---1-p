//  Elaborar um programa que leia 15 elementos inteiros de
//  uma matriz A do tipo vetor. Construir uma matriz B de
//  mesmo tipo, observando a seguinte lei de formação: “todo
//  elemento da matriz B deve ser o quadrado do elemento da
//  matriz A correspondente”. Apresentar os elementos das
//  matrizes A e B

#include <stdio.h>

int main () {
    int A[15], B[15];
    for (int i = 0; i < 15; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d",&A[i]);
        B[i] = A[i]*A[i];
    }
    for (int i = 0; i < 15; i++) {
        printf("%d\n",B[i]);
    }
    return 0;
}