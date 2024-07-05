#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, x1,x2, delta;

    printf("Digite o valor de A: ");
    scanf("%f",&A);
    printf("Digite o valor de B: ");
    scanf("%f",&B);
    printf("Digite o valor de C: ");
    scanf("%f",&C);

    if(A != 0 && B != 0 && C != 0){
        delta = (B*B) - (4 * A * C);
        if (delta>0)
        {
            x1 = (-B+sqrt(delta))/(A*2);
            x2 = (-B-sqrt(delta))/(A*2);
            printf("Há duas soluções reais, x1: %.2f e x2: %.2f",x1,x2);
            printf("\nDelta: %.2f",delta);
        }else if (delta<0)
        {
            printf("Não há solução real");
            printf("\nDelta: %.2f",delta);
        }else{
            x1 = (-B+sqrt(delta))/(A*2);
            printf("Há apenas uma solução real: %.2f",x1);
            printf("\nDelta: %.2f",delta);
        }
    }else{
        printf("Não é uma equação de terceiro grau completa");
    }


    return 0;
}