#include<stdio.h>

//ifndef - diretiva de compila��o
#ifndef PI
    #define PI 3.14567 //constante
#endif

int main()
{
    int valor = 5; //vari�vel

    valor = 467; 

    printf("O valor � %d\n", valor);

    printf("PI vale %f", 2 * PI);

    return 0;
}
