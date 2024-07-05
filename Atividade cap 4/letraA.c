#include <stdio.h>

int main(){
    int A, B, dif;

    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);

    if(A>=B){
        dif = A - B;
    } else{
        dif = B - A;
    }

    printf("A diferença entre o maior e o menor valor resulta em %d",dif);

    return 0;
}