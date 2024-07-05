// Elaborar um programa que leia 20 elementos do tipo real
// em uma matriz A unidimensional e construir uma matriz B de
// mesma dimensão com os mesmos elementos armazenados
// na matriz A, porém de forma invertida. Ou seja, o primeiro
// elemento da matriz A passa a ser o último da matriz B, o
// segundo elemento da matriz A passa a ser o penúltimo da
// matriz B, e assim por diante. Apresentar os elementos das
// matrizes A e B.

#include <stdio.h>

int main () {
    float A[20],B[20];
    int aux;
    for (int i = 0; i < 20; i++) {
        printf("Digite um valor para A: ");
        scanf("%f",&A[i]);
    }
    aux = 19;
    for (int i = 0; i < 20; i++) {
        B[i] = A[aux];
        aux--;
    }
    for (int i = 0; i < 20; i++) {
        printf("%2.f",B[i]);
    }
    return 0;
}