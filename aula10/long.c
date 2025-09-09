#include <stdio.h>
#include <stdlib.h>

int main(){

    short int a = 0;
    long long int x = 2147483647;

    printf("tamanho de x em bytes: %d\n", sizeof x);
    printf("valor de x: %lld\n", x);
    x++;
    printf("valor de x: %lld\n", x);

    return 0;
}
