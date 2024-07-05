#include <stdio.h>

int main (int argc, char *argv[]) {
    int N;
    printf("Digite um número: ");
    scanf("%d",&N);

    printf("--Tabuada da adição--\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n",N,i,N+i);
    }
    printf("--Tabuada da subtração--\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d - %d = %d\n",N+i,N,(N+i)-N);
    }
    printf("--Tabuada da multiplicação--\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n",N,i,N*i);
    }
    printf("--Tabuada da divisão--\n");
    for (int i = N; i <= (10*N); i = (i+N)) {
        printf("%d / %d = %d\n",i,N,(i/N));
    }
    
    
    return 0;
}