// Construir um programa que leia uma matriz A de uma
// dimensão do tipo vetor com 30 elementos do tipo inteiro. Ao
// final do programa, apresentar a quantidade de valores pares
// e ímpares existentes na referida matriz

#include <stdio.h>

int main () {
    int A[30], par=0, impar=0;
    for (int i = 0; i < 30; i++) {
        printf("Digite um valor para A: ");
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 30; i++) {
        if (A[i]%2==0)
        {
            par++;
        }else{
            impar++;
        }
    }
    printf("A matriz A possui %d valores pares e %d valores ímpares.",par,impar);
    return 0;
}