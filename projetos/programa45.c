#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//atol() -> converte string para long
int main()
{
    char valor_s[50];
    //float valor_l;
    long valor_l;

    strcpy(valor_s, "1234567890");

    valor_l = atol(valor_s);

    //printf("O valor é %.2lf\n", valor_l);
    printf("O valor é %ld\n", valor_l);

    return 0;
}
