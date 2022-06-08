#include<stdio.h>
#include<stdlib.h>

//rand()
int main()
{
    time_t t;

    //inicializar o gerador
    srand((unsigned) time(&t));

    //gerar 6 números entre 0 e 60
    for(int i = 0; i < 6; i++) printf("%d\n", rand() % 61); //rand inicia em 0 até 61 - 1

    return 0;
}
