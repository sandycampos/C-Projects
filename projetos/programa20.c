//incluindo um arquivo de cabe�alho (stdio.header)
#include<stdio.h> 
#include"ajuda.h"

int main()
{
    mensagem();

    int n1, n2, ret_s, ret_m;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("A soma de %d com %d � %d\n", n1, n2, ret_s);

    ret_m = multiplicacao(n1, n2);
    printf("A multiplica��o de %d com %d � %d\n", n1, n2, ret_m);

    return 0;
}
