#include <stdio.h>
#include <stdlib.h>

int main(){

    // tipo, nome;
    char sexo = 'k';

    // %c serve para definir caracteres;
    printf("valor da variavel sexo: %c\n", sexo);

    printf("Digite seu sexo: (f, F, m ou M)");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);

    return 0;
}