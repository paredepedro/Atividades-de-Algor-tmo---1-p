#include <stdio.h>

int main () {
    int g = 1, s = 1;
    for (int i = 2; i <= 64; i++) {
        g = g * 2;
        s = s + g;
        printf("%d ",g);
    }
    printf("%d ",s);
    return 0;
}