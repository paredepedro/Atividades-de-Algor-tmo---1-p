#include <stdio.h>

int main(){
    int A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);
    printf("Digite o valor de C: ");
    scanf("%d",&C);
    printf("Digite o valor de D: ");
    scanf("%d",&D);

    if (A%2==0 || A%3==0)
    {
        printf("%d\n",A);
    }
    if (B%2==0 || B%3==0)
    {
        printf("%d\n",B);
    }
    if (C%2==0 || C%3==0)
    {
        printf("%d\n",C);
    }
    if (D%2==0 || D%3==0)
    {
        printf("%d\n",D);
    }    
    return 0;
}