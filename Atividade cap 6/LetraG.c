// Elaborar um programa que leia duas matrizes do tipo vetor
// para o armazenamento de nomes de pessoas, sendo a
// matriz A com 20 elementos e a matriz B com 30 elementos.
// Construir uma matriz C, sendo esta a junção das matrizes A
// e B. Desta forma, a matriz C deve ter a capacidade de
// armazenar 50 elementos. Apresentar os elementos da
// matriz C.
#include <string.h>
#include <stdio.h>

int main () {
    char A[20][250], B[30][250], C[50][250];
    for (int i = 0; i < 20; i++) {
        printf("Digite o nome para A: ");
        gets(A[i]);
    }
    for (int i = 0; i < 30; i++) {
        printf("Digite o nome para B: ");
        gets(B[i]);
    }
    for (int i = 0; i < 20; i++) {
        strcpy(C[i],A[i]);
    }
    for (int i = 0; i < 30; i++) {
        strcpy(C[i+20],B[i]); 
    }
    printf("Nomes em C: ");
    for (int i = 0; i < 50; i++) {
        printf("%s \n", C[i]);
    }
    return 0;
}