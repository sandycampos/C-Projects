/*
    Recursividade é o ato de uma função chamar a sim mesma.
    Obs.: É importante que a função recursiva tenha uma condição de parada.

    Em linguagens funcionais, como o Elixir, não existe a função for, sendo necessário utilizar a recursividade para trabalhar com loop.

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

//5 primeiros números da sequência fibonacci: 1 1 2 3 5
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int qtd;
    printf("Informe o tamanho da sequência fibonacci: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) printf("%d ", fib(i + 1));

    return 0;
}
