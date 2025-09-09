#include <stdio.h>
#include <stdlib.h>

int main (){

    int y = 0;
    short int x = 32767;

    printf("tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("tamanho em memoria de short int: %d bytes\n", sizeof x);

    return 0;
}