#include<stdio.h>

int main()
{
    int valor = 0;
    //1 = verdadeiro, logo: a condição nunca será falsa
    while(1)
    //while(valor < 10)
    {
        printf("Valor %d\n", valor);
        printf("Geek University\n");
        printf("Programação em C: Essencial\n");
        valor = valor + 1;
    }
    return 0;
}
