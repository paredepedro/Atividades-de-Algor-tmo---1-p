// Escrever um programa que leia uma matriz A de uma
// dimensão com 15 elementos numéricos inteiros. Apresentar
// o total de elementos pares existentes na matriz

#include <stdio.h>

int main () {
    int A[15], cont=0;
    for (int i = 0; i < 15; i++) {
        printf("Digite um valor para A: ");
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 15; i++) {
        if(A[i]%2==0){
            cont++;
        }
    }
    printf("A quantidade de valores pares é %d", cont);
    return 0;
}