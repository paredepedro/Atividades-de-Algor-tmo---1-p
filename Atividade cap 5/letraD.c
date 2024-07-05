#include <stdio.h>

int main() {
    int s = 0;
    for (int i = 0; i <= 500; i=i+2) {
        if(i%2==0){
            printf("%d + %d = ",s,i);
            s = s + i;
            printf("%d\n",s);
        }
        
    }
    return 0;
}