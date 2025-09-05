#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;

    printf("Digite uma letra: ");
    letra = fgetc(stdin);
    
    // letra = getc(stdin); // stdin leitura da entrada padrão do pc (teclado)
    // letra = getchar(); // retorna o valor atribuido a variavel sem precidar usar o scanf;

    printf("caracter lido: %c\n", letra);

    return 0;
}