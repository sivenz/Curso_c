#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    // como o computador só entende numeros, todos caracter que digitamos o computador vai na tabela ASCII e busca como o representa em binario para entendelo
    // setlocale(LC_ALL,NULL); padrão do C
    // setlocale(LC_ALL,""); padrão do sistema
    // setlocale(LC_ALL,"Portuguese"); portugues brasileiro


    char letra = "f";

    printf("%c", 102);

    return 0;
}
