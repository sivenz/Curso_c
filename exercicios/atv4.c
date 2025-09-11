#include <stdio.h>
#include <stdlib.h>

//5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
//número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
//sabendo que são descontados 8% para imposto de renda.


int main() {
    
    float dia = 45.00;
    int dias;
    float resultado;
    float desconto = 8.00;
    float liquido;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    resultado = (dia * dias);
    
    liquido = resultado - (resultado * (desconto / 100.0));

    printf("Valor líquido a ser recebido: %.2f", liquido);

    return 0;
}
