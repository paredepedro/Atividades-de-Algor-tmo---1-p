// Elaborar um programa que leia duas matrizes A e B de uma
// dimensão com seis elementos. A matriz A deve aceitar
// apenas a entrada de valores pares, enquanto a matriz B
// deve aceitar apenas a entrada de valores ímpares. A
// entrada das matrizes deve ser validada pelo programa, e
// não pelo usuário. Construir uma matriz C que seja o
// resultado da junção das matrizes A e B, de modo que a
// matriz C contenha 12 elementos. Apresentar os elementos
// da matriz C

#include <stdio.h>

int main () {
    int A[6], B[6], C[12], n, i_A, i_B;

    i_A=0;
    i_B=0;
    
    //atribuindo valor de A e B
    do {
        printf("Digite um valor: ");
        scanf("%d",&n);
        if(n%2==0){
            A[i_A]=n;
            i_A++;
        }else{
            B[i_B]=n;
            i_B++;
        } 
    } while(i_A<6 || i_B<6);

    //concatenando A e B em C
    for (int i = 0; i < 12; i++) {
        if(i<6){
            C[i] = A[i];
        }else if(i<12){
            C[i] = B[i-6];
        }
    }

    //imprimindo C
    printf("\n---Valores de C---\n");
    for (int i = 0; i < 12; i++) {
        printf("%d\n",C[i]);
    }

    return 0;
}