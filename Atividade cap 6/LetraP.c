// Elaborar um programa que leia 12 elementos inteiros para
// uma matriz A de uma dimensão do tipo vetor. Construir uma
// matriz B de mesmos tipo e dimensão, observando a
// seguinte lei de formação: “todo elemento da matriz A que for
// ímpar deve ser multiplicado por 2; caso contrário, o
// elemento da matriz A deve permanecer constante”.
// Apresentar os elementos da matriz B

#include <stdio.h>

int main () {
    int A[12], B[12];
    for (int i = 0; i < 12; i++) {
        printf("Digite valores para A: ");
        scanf("%d",&A[i]); 
    }
    for (int i = 0; i < 12; i++) {
        if(A[i]%2==0){
            B[i] = A[i];
        }else{
            B[i] = A[i]*2;
        }
    }
    printf("Os valores de B são: \n");
    for (int i = 0; i < 12; i++) {
        printf("%d\n",B[i]);
    }
    return 0;
}