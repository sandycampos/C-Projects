#include<stdio.h>

int main()
{
    int valor = 2; 
    printf("Valor vale %d\n", valor);

    //deslocamento de bits à esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    //deslocamento à direita
    valor = 2;
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);

    //NOT
    valor = 2; //0000 0010
    valor = ~valor; //11111101 = 253
    printf("Valor vale %x\n", valor); //253 - 2^8
}
