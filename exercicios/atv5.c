#include <stdio.h>
#include <stdlib.h>

//6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
//como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
//Dólares.

int main() {
    
    float reais;
    float dolares;

    printf("Digite a quantidade de reais para converter para dolares: ");
    scanf("%f", &reais);

    dolares = (reais / 5.30);

    printf("Seu dilnheiro em dolares: %.2f", dolares);
    return 0;
}
