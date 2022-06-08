//ponteiros: manipulação de memória (acesso ao hardware lógico da memória)

#include<stdio.h>

/*
void incrementa(int valor) 
{
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", valor);
    printf("O endereço de memória é %d\n", &valor);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++valor);
    printf("O endereço de memória é %d\n", &valor);
}
*/

//recebendo um endereço de memória como parâmetro de entrada que aponta para um valor do tipo inteiro
void incrementa(int* valor) 
{
    printf("Antes de incrementar.\n");
    //depois* para declarar
    //*antes para imprimir
    printf("O contador vale %d\n", (*valor)); //acesso ao valor
    printf("O endereço de memória é %d\n", valor); //endereço de memória

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereço de memória é %d\n", valor);
}

int main()
{
    //quando declaramos uma variável, a linguagem C aloca um espaço em memória para colocar este valor
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador); //variável
    printf("O endereço de memória é %d\n", &contador); //endereço de memória da variável

    //cópia por valor
    //incrementa(contador);
    incrementa(&contador);
    //scanf("%d", &contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memória é %d\n", &contador);

    return 0;
}
