#include <stdio.h>

int main(){
    int quadrados[15];

    //primeiro passo: armazenar na memória, usando um vetor
    for(int i=1; i<=15; i++){
        quadrados[i-1] = i * i;
    }
    
    //segundo passo: imprimir valores
    for(int i=0; i<=14; i++){
        printf("O quadrado de %d é igual a %d\n\n",i+1,quadrados[i]);
    }
    return 0;
}