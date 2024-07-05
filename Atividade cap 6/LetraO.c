// Escrever um programa que leia 25 elementos (valores reais)
// para temperaturas em graus Celsius e armazene esses
// valores em uma matriz A de uma dimensão do tipo vetor.
// Construir uma matriz B de mesmos tipo e dimensão, em que
// cada elemento da matriz B deve ser a conversão da
// temperatura em graus Fahrenheit do elemento
// correspondente da matriz A. Apresentar os elementos das
// matrizes A e B

#include <stdio.h>

int main () {
    float cels[25],fahr[25];
    for (int i = 0; i < 25; i++) {
        printf("Digite valores em graus Celsius: ");
        scanf("%f",&cels[i]);
    }
    for (int i = 0; i < 25; i++) {
        fahr[i] = (1.8*cels[i]) + 32;
    }
    for (int i = 0; i < 25; i++) {
        printf("A temperatura de %.2fºC equivale a %.2fºF\n", cels[i], fahr[i]);
    }
    return 0;
}