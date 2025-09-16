#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    // usar chaves sempre para que n de erro o programa no if else

    if (a < 0) {
        printf("O numero é negativo");
    } else {
        printf("O numero é positivo");
    }

    return 0;
}
