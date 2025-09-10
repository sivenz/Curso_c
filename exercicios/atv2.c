#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("valor de tudo: a = %d b = %d", a, b);

    return 0;
}
