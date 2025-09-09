#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //float x = 3.1415;

    double y = 3.1415;

    // se colocar um L maiusculo no lf NÃO FUNCIONA NO WINDOWS
    printf("valor de y: %.5lf\n", y);

    // para imprimir um numero com 128 bytes use
    //__mingw_fprintf("valor de y: %.Lf\n", y);
    //essa bosta não funcionou ^ 

    printf("um double precisa de %d bytes de memoria", sizeof(y));

    return 0;
}
