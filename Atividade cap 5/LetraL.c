#include <stdio.h>

int main () {
    int N, S = 0, F;

    for (int i = 1; i <= 15; i++) {
        F = 1;
        printf("Digite um valor para se calcular a fatorial: ");
        scanf("%d", &N);

        while(N>0){
            F = F * N;
            N--;
        }

        S = S + F;
    }
    printf("%d ",S);
    return 0;
}   