#include<stdio.h>

/*
    Funções de entrada e saída

    Acesso a arquivos:
    fclose()
    fflush() -> limpa buffer (corrige um bug no Windows + C + Eclipse)
    fopen()

    Entradas e saídas formatadas:
    fscanf()
    printf()
    scanf()

    Entradas e saídas de caracteres:
    gets() -> lê um caractere de um arquivo
    fputs() -> escreve um caractere ou uma string em um arquivo
    getchar() -> lê um caractere da entrada padrão (teclado)
    fgets() -> lê uma string da entrada padrão

    Tratamento de erros:
    feof() -> file end of file

    Tipos e macros:
    FILE
    EOF
    NULL
*/

int main()
{
    int num1, num2, soma = 0;

    printf("Informe o num1: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Informe o num2: ");
    fflush(stdout);
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d com %d é %d", num1, num2, soma);
    
    return 0;
}
