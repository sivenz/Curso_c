#include <stdio.h>
#include <stdlib.h>

int main (){

    char a, b;

    // tentando fazer c ler 2 caracteres.
    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);

    // espaço entre os %c => comando para o computador para desconsiderar o ENTER e o espaço (tab tbm)
    // buffer do teclado => f\n
    // fflush(); <= NÃO USAR, FUNCIONA APENAS NO WINDOWS, além de não funcionar em todos os casos que grande bosta de comenado em C
    printf("primeira letra: %c\n Segunda letra: %c\n", a, b);

    return 0;
}