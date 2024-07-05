#include <stdio.h>

int main (int argc, char *argv[]) {
    int s=0, cont;
    float m;
    for (int i = 50; i <= 70; i++) {
        if(i%2==0){
            s = s + i;
            cont++;
        } 
    }
    m = s/cont;
    printf("Soma: %d --- Media: %.2f",s,m);
    return 0;
}