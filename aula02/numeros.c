#include <stdio.h>
#include <stdlib.h>


int main() {
   
    // tipo, nome;
    float numero = 3.1415;
   
    // %f serve para numeros reais 
    printf("Valor da minha variavel: %.2f", numero);
   
    printf("Digite um numero real: ");
    scanf("%f", &numero);


    printf("Valor lido: %f", numero);

    
    int valor, valor2; // criei uma variavel para guardar um valor do tipo inteiro

    // atribuio um valor a variável
    valor = 50;


    // scanf armazena a informação desejada, pro exemplo pedimos um numero inteiro (%d) e guardamos ele com & atribuindo a variavel
    printf("Digite um valor inteiro:");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro:");
    scanf("%d", &valor2);

    printf("O valor ai doido: %d\n segundo valor doido: %d\n\n", valor, valor2);
    

    return 0;
}