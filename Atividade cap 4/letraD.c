#include <stdio.h>

int main(){
    float MD1, MD2, N1, N2, N3, N4, NE;
    
    printf("Digite a primeira nota: ");
    scanf("%f",&N1);
    printf("Digite a segunda nota: ");
    scanf("%f",&N2);
    printf("Digite a terceira nota: ");
    scanf("%f",&N3);
    printf("Digite a quarta nota: ");
    scanf("%f",&N4);

    MD1 = (N1+N2+N3+N4)/4;

    if (MD1 >= 7)
    {
        printf("Aprovado");
        printf("\nA média foi de %.2f pontos",MD1);
    }else{
        printf("Digite a quinta nota: ");
        scanf("%f",&NE);
        MD2 = (MD1+NE)/2;
        if (MD2 >= 5)
        {
            printf("Aprovado em Exame");
        }else{
            printf("Reprovado");
        }
        printf("\nA média foi de %.2f pontos",MD2);
    }
    

    return 0;
}