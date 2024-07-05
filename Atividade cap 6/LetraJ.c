// Elaborar um programa que leia uma matriz A do tipo vetor
// com 20 elementos inteiros. Construir uma matriz B dos
// mesmos tipo e dimensão da matriz A, sendo cada elemento
// da matriz B o somatório de 1 até o valor do elemento
// correspondente armazenado na matriz A. Se o valor do
// elemento da matriz A[1] for 5, o elemento correspondente da
// matriz B[1] deve ser 15, pois o somatório do elemento da
// matriz A é 1 + 2 + 3 + 4 + 5. Apresentar os elementos da
// matriz B

#include <stdio.h>

int main () {
    int A[20],B[20], aux;
    for (int i = 0; i < 20; i++) {
        printf("Digite valores para A: ");
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 20; i++) {
        aux = A[i];
        B[i] = 0;
        while(aux>0){
            B[i] = B[i] + aux;
            aux--;
        }
    }
    printf("\n---Valores de B---\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\n",B[i]);
    }
    return 0;
}