//aula sobre fun��es: prot�tipos de fun��es

#include<stdio.h>

/*
    prot�tipo de fun��o: indica para a main as fun��es implementadas ap�s ela que ser�o utilizadas

    assinatura das fun��es (composi��o)
    - tipo de retorno
    - nome
    - par�metros de entrada (opcional)
*/
int soma(int num1, int num2);

//prot�tipo 2
void mensagem();

int main()
{
    int n1, n2, ret;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);

    printf("A soma de %d com %d � %d\n", n1, n2, ret);

    mensagem();

    return 0;
}

//implementa��o
int soma(int num1, int num2)
{
    return num1 + num2;
}

void mensagem()
{
    printf("Bem-vindo...");
}
