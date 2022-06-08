//aula sobre funções: protótipos de funções

#include<stdio.h>

/*
    protótipo de função: indica para a main as funções implementadas após ela que serão utilizadas

    assinatura das funções (composição)
    - tipo de retorno
    - nome
    - parâmetros de entrada (opcional)
*/
int soma(int num1, int num2);

//protótipo 2
void mensagem();

int main()
{
    int n1, n2, ret;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);

    printf("A soma de %d com %d é %d\n", n1, n2, ret);

    mensagem();

    return 0;
}

//implementação
int soma(int num1, int num2)
{
    return num1 + num2;
}

void mensagem()
{
    printf("Bem-vindo...");
}
