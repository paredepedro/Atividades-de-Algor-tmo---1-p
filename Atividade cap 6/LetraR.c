// Elaborar um programa que leia seis elementos (valores
// inteiros) para as matrizes A e B de uma dimensão do tipo
// vetor. Construir as matrizes C e D de mesmo tipo e
// dimensão. A matriz C deve ser formada pelos elementos de
// índice ímpar das matrizes A e B e a matriz D deve ser
// formada pelos elementos de índice par das matrizes A e B.
// Apresentar os elementos das matrizes C e D.

#include <stdio.h>

int main () {
    int A[6], B[6], C[6], D[6], contC=0, contD=0;

    for (int i = 0; i < 6; i++) {
        printf("Digite valores para A: ");
        scanf("%d",&A[i]); 
    }
    for (int i = 0; i < 6; i++) {
        printf("Digite valores para B: ");
        scanf("%d",&B[i]);
    }
    for (int i = 0; i < 6; i++) {
        if(i%2==0){
            D[contD] = A[i];
            contD++;
        }else{
            C[contC] = A[i];
            contC++;
        }
    }
    for (int i = 0; i < 6; i++) {
        if(i%2==0){
            D[contD] = B[i];
            contD++;
        }else{
            C[contC] = B[i];
            contC++;
        }
    }

    for (int i = 0; i < contC; i++) {
        printf("Valor de C: %d\n", C[i]);
    }
    for (int i = 0; i < contD; i++) {
        printf("Valor de D: %d\n", D[i]);
    }
    return 0;
}