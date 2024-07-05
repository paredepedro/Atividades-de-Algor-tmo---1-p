// Elaborar um programa que leia 20 elementos (valores reais)
// para temperaturas em graus Celsius e armazene esses
// valores em uma matriz A de uma dimensão. O programa ao
// final deve apresentar a menor, a maior e a média das
// temperaturas lidas

#include <stdio.h>

int main () {
    float temp[20], maior, menor, media, somatorio = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite valores de temperatura: ");
        scanf("%f",&temp[i]);
        somatorio = somatorio + temp[i];
    }

    maior = temp[0];
    menor = temp[0];
    
    for (int i = 0; i < 20; i++) {
        if (temp[i]>maior) {
            maior = temp[i];
        }
        if (temp[i]<menor) {
            menor = temp[i];
        }
    }

    media = somatorio/20;

    printf("A maior temperatura digitada foi %.2f\n", maior);
    printf("A menor temperatura digitada foi %.2f\n", menor);
    printf("A media das temeperaturas digitadas foi %.2f\n", media);

    return 0;
}