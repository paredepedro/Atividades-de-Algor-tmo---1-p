#include <stdio.h>

int main () {
    int s = 0;

    for (int i = 0; i <= 100; i++) {
        s = s + i;
    }
    printf("%d\n",s);

    return 0;
}
