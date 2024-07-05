#include <stdio.h>

int main () {
    char T = 'S', nome[200];
    float l, c, A, At=0;
    while(T != 'N'){
        printf("Nome: ");
        scanf("%s",nome);
        printf("Largura: ");
        scanf("%f",&l);
        printf("Comprimento: ");
        scanf("%f",&c);
        A = l * c;
        printf("Nome: %s, Area: %.2f\n",nome,A);
        At = At + A;
        printf("Deseja continuar(S/N? ");
        scanf(" %c",&T);
    }
    printf("Area total: %.2f",At);
    return 0;
}