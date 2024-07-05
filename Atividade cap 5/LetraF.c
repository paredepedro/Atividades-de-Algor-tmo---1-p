#include <stdio.h>

int main (int argc, char *argv[]) {
    for (int i = 1; i < 200; i++) {
        if(i%4==0){
            printf("%d ",i);
        }
    }
    return 0;
}