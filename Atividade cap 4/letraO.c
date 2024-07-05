#include <stdio.h>

int main(){
    int N, mult;
    printf("Digite o valor de N: ");
    scanf("%d",&N);
    mult = N*2;
    if(mult>30){
        printf("%d",mult);
    }
    return 0;
}