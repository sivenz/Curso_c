#include <stdio.h>
#include <stdlib.h>

int main()  {

    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // buffer do teclado => m\n

    printf("Suas informações\n Sexo:%c\nIdade:%d\nPeso:%.1f\nAltura:%.2f", sexo, idade, peso, altura);

}