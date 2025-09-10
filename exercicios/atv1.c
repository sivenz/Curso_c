#include <stdio.h>
#include <stdlib.h>

int main()  {
    
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("seus valores trocados: a = %d b = %d", a, b);

    return 0;
}