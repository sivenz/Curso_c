#include <stdio.h>
#include <stdlib.h>

int main (){

    char a, b, c;

    printf("Digite uma letra quebrada: ");
    scanf("%c", &a);

    printf("Digite uma letra quebrada: ");
    scanf(" %c", &b);

    printf("Digite uma letra quebrada: ");
    scanf(" %c", &c);

    // para limpar o buffer do teclado separadamente de ESPAÇO antes do %c

    printf("As letra malandrage: %c %c %c", a, b, c);

    return 0;
}