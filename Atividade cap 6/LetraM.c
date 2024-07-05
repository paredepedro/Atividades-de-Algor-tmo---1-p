// Construir um programa que calcule a tabuada de um valor
// qualquer de 1 até 10 e armazene os resultados em uma
// matriz A de uma dimensão. Apresentar os elementos da
// matriz A

#include <stdio.h>

int main () {
    int A[40], n, cont=1;

    printf("Digite o numero: ");
    scanf("%d",&n);

    for (int i = 0; i < 40; i++) {
        //Deve-se manter o valor de conte <=10;
        if(cont>10){
            cont = 1;
        }
        //Operações armazenadas a cada 10 blocos; 
        if(i<10){
            A[i] = n + cont;
            cont++;
        }else if (i<20) {
            A[i] = n - cont;
            cont++;
        }else if (i<30){
            A[i] = n * cont;
            cont++;
        }else if (i<40){
            A[i] = n/cont;
            cont++;
        }
    }
    for (int i = 0; i < 40; i++) {
        if(cont>10){
            cont = 1;
        }
        if(i<10){
            printf("%d + %d = %d\n",n,cont,A[i]);
            cont++;
        }else if (i<20) {
            printf("%d - %d = %d\n",n,cont,A[i]);
            cont++;
        }else if (i<30){
            printf("%d * %d = %d\n",n,cont,A[i]);
            cont++;
        }else if (i<40){
            printf("%d / %d = %d\n",n,cont,A[i]);
            cont++;
        }
    }
    return 0;
}