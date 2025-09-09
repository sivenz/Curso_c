#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a = 10, b = 20;

    // para fazer uma conversão basta ir a esquerda e abrir () e escrever oq vc precisa
    // CUIDADO ao converter numeros reais em inteiros, pois a variavel só ira receber a parte inteira

    printf("Soma:%d\n", a + b);
    printf("Subtração:%d\n", a - b);
    printf("Multiplicação:%d\n", a * b);
    printf("Divisão:%f\n", (float)a / b);

    return 0;
}
