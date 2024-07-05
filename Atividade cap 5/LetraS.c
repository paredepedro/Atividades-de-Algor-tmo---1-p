#include <stdio.h>

int main () {
    int dividendo, divisor, quociente=0, c;
    printf("Digite o valor do dividendo: ");
    scanf("%d",&dividendo);
    printf("Digite o valor do divisor: ");
    scanf("%d",&divisor);
    c = dividendo;
    while(c > 0){
        quociente++;
        c = c - divisor;
    }
    printf("O resultado inteiro da dividão de %d por %d vale %d.",dividendo,divisor,quociente);
    return 0;
}