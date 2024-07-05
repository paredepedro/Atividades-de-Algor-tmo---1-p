#include <stdio.h>

int main (int argc, char *argv[]) {
    int maior, menor, n;
    printf("Digite um número: ");
    scanf("%d",&n);
    maior = n;
    menor = n;
    while(n > 0){
        if(n>maior){
            maior = n;
        }else if (n<menor) {
            menor = n; 
        }
        printf("Digite um número: ");
        scanf("%d",&n);
    }
    printf("Maior = %d --- Menor = %d",maior, menor);
    return 0;
}