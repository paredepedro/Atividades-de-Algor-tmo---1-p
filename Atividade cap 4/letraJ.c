#include <stdio.h>

int main(){
    int N;
    printf("Digite um valor: ");
    scanf("%d",&N);
    if(N%2==0){
        printf("%d é par.",N);
    }else{
        printf("%d é ímpar",N);
    }
    return 0;
}