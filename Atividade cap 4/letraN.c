#include <stdio.h>

int main(){
    int A, B, C, SOMA;
    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);
    printf("Digite o valor de C: ");
    scanf("%d",&C);

    SOMA = A + B + C;

    if(SOMA>=100){
        printf("%d",SOMA);
    }
    return 0;
}