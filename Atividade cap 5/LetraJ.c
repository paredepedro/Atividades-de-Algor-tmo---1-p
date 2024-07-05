#include <stdio.h>

int main () {
    float C, F = 10.00;
    while(F<=100){
        C = (F - 32)/1.8;
        printf("%.2f ",C); 
        F=F+10;
    }
    return 0;
}