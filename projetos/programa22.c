#include<stdio.h>

int main()
{
    int n; //variável que guarda o seu valor na memória

    //declarando o ponteiro
    int* p; //ponteiro é um valor que aponta para um endereço de memória

    printf("Informe um número: ");
    scanf("%d", &n);

    //inicializando o ponteiro
    p = &n;

    printf("O número informado foi %d\n", n);

    printf("Endereço de memória: %p\n", &n); //formato numérico do endereço de memória

    printf("Endereço do ponteiro: %p\n", p); //endereço real da memória (hexadecimal)

    return 0;
}
