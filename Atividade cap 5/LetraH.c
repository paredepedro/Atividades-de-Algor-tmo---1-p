#include <stdio.h>

int main () {
    int B, E, P = 1;
    
    printf("Digite um valor para a base(inteiro): ");
    scanf("%d",&B);
    printf("Digite um valor para o expoênte(inteiro): ");
    scanf("%d",&E);
    if(B > 0 && E > 0){
        while(E > 0){
            P = P * B;
            E--;
        }
        printf("%d",P);
    }else{
        printf("Um dos valores digitados é negativo!");
    }
    
    return 0;
}