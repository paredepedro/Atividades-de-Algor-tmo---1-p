#include <stdio.h>

int main(){
    int N;
    printf("Digite um número na faixa de 1 a 9: ");
    scanf("%d",&N);
    if (N>9 || N<1)
    {
        printf("O valor está fora da faixa permitida");
    }else{
        printf("O valor está na faixa permitida");
    }
    return 0;
}