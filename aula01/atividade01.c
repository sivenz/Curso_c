#include <stdio.h>

// caractere de escape para saltar uma linha -> /n

int main() {

   // printf eh uma função de saida (serve pra printar oq eu escrevi)
   printf("Hello World!\n");

   printf("\n------------------------------------------\n\n");
   printf("1 - logar   2 - cadastrar   3 - imprimir\n");
   printf("\n------------------------------------------\n\n");

   printf("\nValor retornado: %d", printf("Bom"));


   // getchar serve para parar ou encerrar o programa (obs: substitui o system pause, que só funciona no windows).
   printf("\nPressione qualquer tecla para finalizar.");
   getchar();

   return 0;
}
