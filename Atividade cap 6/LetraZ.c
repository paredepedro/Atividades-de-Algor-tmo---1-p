// Elaborar um programa que leia uma matriz A de uma
// dimensão com dez elementos numéricos inteiros.
// Apresentar o total de elementos ímpares existentes na
// matriz e também o percentual do valor total de números
// ímpares em relação à quantidade total de elementos
// armazenados na matriz

#include <stdio.h>

int main () {
    int A[10], cont = 0;
    float percentual;
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para A: ");
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        if(!(A[i]%2==0)){
            cont++;
        }
    }
    percentual = (cont*100)/10;
    printf("A matriz A possui %d valores ímpares, o percentual é %.2f %", cont, percentual);
    return 0;
}