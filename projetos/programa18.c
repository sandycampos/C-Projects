//aula sobre fun��es: usando fun��es

#include<stdio.h>

//o ideal � que a fun��o main esteja posicionada ap�s as outras fun��es
void mensagem()
{
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2)
{
    int res = num1 + num2;
    return res;
}

//'a' ou 97 (ASCII)
void proximo_char(char caractere)
{
    printf("%c", caractere + 1);
}

//main -> principal
int main()
{
    printf("Ol�...\n");

    mensagem();

    //int retorno = soma(4, 6);
    //printf("Retorno = %d", retorno);

    printf("Retorno = %d\n", soma(4, 6));

    //char cara = 'a';
    char cara = 97;
    proximo_char(cara);

    return 0;
}
