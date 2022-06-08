#include<stdio.h>

/*
    Fun��es de entrada e sa�da

    Acesso a arquivos:
    fclose()
    fflush() -> limpa buffer (corrige um bug no Windows + C + Eclipse)
    fopen()

    Entradas e sa�das formatadas:
    fscanf()
    printf()
    scanf()

    Entradas e sa�das de caracteres:
    gets() -> l� um caractere de um arquivo
    fputs() -> escreve um caractere ou uma string em um arquivo
    getchar() -> l� um caractere da entrada padr�o (teclado)
    fgets() -> l� uma string da entrada padr�o

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

    printf("A soma de %d com %d � %d", num1, num2, soma);
    
    return 0;
}
