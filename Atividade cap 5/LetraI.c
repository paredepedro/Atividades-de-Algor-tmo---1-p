#include <stdio.h>

int main () {

    int atual = 1, prox, ante=0;
    printf("%d ",ante);
    printf("%d ",atual);
    for (int i = 1; i < 14; i++) {
        prox = atual + ante;
        printf("%d ",prox);
        ante = atual;
        atual = prox;
    }

    return 0;
}