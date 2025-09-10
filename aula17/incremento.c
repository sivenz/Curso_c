#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int contador = 10;

    // contador++; <- uma das formas de fazer o incremento -> contador += 1

    printf("Valor: %d\n", contador++ );
    printf("Valor: %d\n", contador );

    return 0;
}
