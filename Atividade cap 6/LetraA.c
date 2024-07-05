//  a) Elaborar um programa que efetue a leitura de dez nomes de
//  pessoas em uma matriz A do tipo vetor e apresentá-los em
//  seguida.

#include <stdio.h>

int main () {
    char nomes[10][25];
    for (int i = 0; i < 10; i++) {
        printf("Digite um nome: ");
        gets(nomes[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("\nNome %d: %s", i, nomes[i]);
    }
    return 0;
}