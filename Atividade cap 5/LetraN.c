#include <stdio.h>

int main () {
    float n, m, s=0;
    int cont;
    printf("Digite um valor: ");
    scanf("%f",&n);
    while(n>0){
        s = s + n;
        cont++;
        printf("Digite um valor: ");
        scanf("%f",&n);
    }
    m = s/cont;
    printf("Quantidade de valores: %d\n somatório: %.2f\n média: %.2f",cont,s,m);
    return 0;
}