#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
// porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
// Assuma que a conta será dividida igualmente.


int main() {
    
    float valorDespesa;
    float resultado;
    int pessoas;
    float valorPagar;

    printf("Ola boa tarde, Coloque o preço da conta a se pagar: ");
    scanf(" %f", &valorDespesa);

    resultado = (valorDespesa * 25.0) / 100;

    printf("Numero de pessoas para dividir a conta: ");
    scanf("%d", &pessoas);

    valorPagar = (valorDespesa / pessoas);

    printf("Então o valor da conta ficou: %.2f\n Total da gorjeta para o garçom: %.2f", valorPagar, resultado);

    return 0;
}
