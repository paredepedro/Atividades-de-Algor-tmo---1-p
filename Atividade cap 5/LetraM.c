#include <stdio.h>

int main () {
    float n, s = 0.0, m;
    for (int i = 1; i <=10; i++) {
        printf("Digite um valor real qualquer: ");
        scanf("%f",&n);
        s = s + n;
    }
    m = s/10;
    printf("Somatorio: %.2f --- Média: %.2f", s,m);
    return 0;
}