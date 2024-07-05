#include <stdio.h>

int main() {
    int p = 1;
    int c;
    for (int i = 0; i <= 15; i++) {
        c = i;
        while (c>0)
        {
            p = p * 3;
            c--;
        }
        printf("%d\n",p);
        p = 1;
        
    }
    return 0;
}