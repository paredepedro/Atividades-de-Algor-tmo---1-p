// Escrever um programa que leia duas matrizes A e B de uma
// dimensão com dez elementos. A matriz A deve aceitar
// apenas a entrada de valores divisíveis por 2 e 3, enquanto a
// matriz B deve aceitar apenas a entrada de valores múltiplos
// de 5. A entrada das matrizes deve ser validada pelo
// programa, e não pelo usuário. Construir uma matriz C que
// seja o resultado da junção das matrizes A e B, de modo que
// contenha 20 elementos. Apresentar os elementos da matriz
// C

#include <stdio.h>

int main () {
    int A[10], B[10], C[20], n, i_A, i_B;

    i_A=0;
    i_B=0;
    
    //atribuindo valor de A e B
    do {
        printf("Digite um valor: ");
        scanf("%d",&n);
        if(n%2==0 && n%3==0 && i_A<10){
            A[i_A]=n;
            i_A++;
        }if(n%5==0 && i_B<10){
            B[i_B]=n;
            i_B++;
        } 
    } while(i_A<10 || i_B<10);

    //concatenando A e B em C
    for (int i = 0; i < 20; i++) {
        if(i<10){
            C[i] = A[i];
        }else if(i<20){
            C[i] = B[i-10];
        }
    }

    //imprimindo C
    printf("\n---Valores de C---\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\n",C[i]);
    }
    return 0;
}