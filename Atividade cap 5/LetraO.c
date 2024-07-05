#include <stdio.h>

int main (int argc, char *argv[]) {
    int F, c;
    for (int i = 1; i <= 10; i++) {
        F = 1;
        if(i%2!=0){
            c = i;
            while(c>0){
                F = F * c;
                c--;
            }
            printf("%d ",F);
        }
    }
    return 0;
}