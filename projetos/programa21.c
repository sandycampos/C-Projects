//ponteiros: manipula��o de mem�ria (acesso ao hardware l�gico da mem�ria)

#include<stdio.h>

/*
void incrementa(int valor) 
{
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", valor);
    printf("O endere�o de mem�ria � %d\n", &valor);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++valor);
    printf("O endere�o de mem�ria � %d\n", &valor);
}
*/

//recebendo um endere�o de mem�ria como par�metro de entrada que aponta para um valor do tipo inteiro
void incrementa(int* valor) 
{
    printf("Antes de incrementar.\n");
    //depois* para declarar
    //*antes para imprimir
    printf("O contador vale %d\n", (*valor)); //acesso ao valor
    printf("O endere�o de mem�ria � %d\n", valor); //endere�o de mem�ria

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endere�o de mem�ria � %d\n", valor);
}

int main()
{
    //quando declaramos uma vari�vel, a linguagem C aloca um espa�o em mem�ria para colocar este valor
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador); //vari�vel
    printf("O endere�o de mem�ria � %d\n", &contador); //endere�o de mem�ria da vari�vel

    //c�pia por valor
    //incrementa(contador);
    incrementa(&contador);
    //scanf("%d", &contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endere�o de mem�ria � %d\n", &contador);

    return 0;
}
