#include <stdio.h>

int main(){
    char SEXO;
    char NOME[255];

    printf("Digite seu nome: ");
    scanf("%s",NOME);
    printf("Informe seu sexo (M ou F): ");
    scanf("%c",&SEXO);

    switch (SEXO)
    {
    case 'M':
        printf("llmo. Sr. %s",NOME);
        break;
    case 'F':
        printf("llma. Sra. %s",NOME);
        break;
    default:
        printf("Sexo informado invalido.");
        break;
    }
    

    return 0;
}