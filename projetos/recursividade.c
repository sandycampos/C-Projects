/*
    Recursividade � o ato de uma fun��o chamar a sim mesma.
    Obs.: � importante que a fun��o recursiva tenha uma condi��o de parada.

    Em linguagens funcionais, como o Elixir, n�o existe a fun��o for, sendo necess�rio utilizar a recursividade para trabalhar com loop.

    #include<stdio.h>
    int contador = 1;
    int main()
    {
        printf("Imprimindo algo... %d\n", contador);
        contador++;
        main();
        return 0;
    }
*/

#include<stdio.h>

//5 primeiros n�meros da sequ�ncia fibonacci: 1 1 2 3 5
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int qtd;
    printf("Informe o tamanho da sequ�ncia fibonacci: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) printf("%d ", fib(i + 1));

    return 0;
}
