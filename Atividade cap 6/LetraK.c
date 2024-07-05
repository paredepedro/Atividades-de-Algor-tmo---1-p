// Elaborar um programa que leia uma matriz A do tipo vetor
// com dez elementos inteiros positivos. Construir uma matriz
// B de mesmos tipo e dimensão, em que cada elemento da
// matriz B deve ser o valor negativo do elemento
// correspondente da matriz A. Desta forma, se em A[1] estiver
// armazenado o elemento 8, deve estar em B[1] o valor –8 e
// assim por diante. Apresentar os elementos da matriz B

#include <stdio.h>

int main () {
    int A[10],B[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite valores para A: ");
        scanf("%d",&A[i]); 
    }
    for (int i = 0; i < 10; i++) {
        B[i] = A[i]*-1;
    }
    printf("\n---Valores de B---\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n",B[i]);
    }
    return 0;
}