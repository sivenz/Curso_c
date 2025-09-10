#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int resultado, contador = 10;

    resultado = --contador;

    // se o -- estiver a esquerda faça a operação primeiro (tbm serve para o incremento ++)

    printf("Valor da operação: %d", resultado);

    return 0;
}
