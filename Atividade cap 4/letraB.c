#include <stdio.h>

int main(){
    int N;
    printf("Digite o valor de N: ");
    scanf("%d",&N);

    if(N<0){
        N = N * -1;
    }

    printf("O valor de N, quando positivo, vale %d",N);

    return 0;
}