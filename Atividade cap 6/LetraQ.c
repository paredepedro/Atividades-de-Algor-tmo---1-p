// Elaborar um programa que leia 15 elementos reais para
// uma matriz A de uma dimensão do tipo vetor. Construir uma
// matriz B de mesmos tipo e dimensão, observando a
// seguinte lei de formação: “todo elemento da matriz A que
// possuir índice par deve ter seu elemento dividido por 2; caso
// contrário, o elemento da matriz A deve ser multiplicado por
// 1.5”. Apresentar os elementos da matriz B

#include <stdio.h>

int main () {
    float A[15], B[15];
    for (int i = 0; i < 15; i++) {
        printf("Digite valores para A: ");
        scanf("%f",&A[i]); 
    }
    for (int i = 0; i < 15; i++) {
        if(i%2==0){
            B[i]=A[i]/2;
        }else{
            B[i]=A[i]*1.5;
        }
    }
    printf("\n---Elementos de B---\n");
    for (int i = 0; i < 15; i++) {
        printf("%2.f\n",B[i]);
    }
    return 0;
}