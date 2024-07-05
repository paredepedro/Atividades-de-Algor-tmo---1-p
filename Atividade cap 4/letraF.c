#include <stdio.h>

int main(){
    int A, B, C, N1,N2,N3;

    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);
    printf("Digite o valor de C: ");
    scanf("%d",&C);

    if(A>B){
        if (B>C)
        {
            N1 = A;
            N2 = B;
            N3 = C;
        }else{
            N1 = A;
            N2 = C;
            N3 = B;
        }
        if (C>A)
        {
            N1 = C;
            N2 = A;
            N3 = B;
        }
    }else{
        if (A>C)
        {
            N1 = B;
            N2 = A;
            N3 = C;
        }else{
            N1 = B;
            N2 = C;
            N3 = A;
        }
        if (C>B)
        {
            N1 = C;
            N2 = B;
            N3 = A;
        }
        
    }
    printf("%d < %d < %d",N3,N2,N1);
    return 0;
}