#include<stdio.h>

union numeros
{
    int num1, num2, num3, num4, num5; //20 bytes
} n;

int main()
{
    int soma = 0;

    n.num1 = 1;
    soma += n.num1;
    printf("O valor de num1 é %d\n", n.num1);
    n.num2 = 3;
    soma += n.num2;
    printf("O valor de num2 é %d\n", n.num2);
    n.num3 = 5;
    soma += n.num3;
    printf("O valor de num3 é %d\n", n.num3);
    n.num4 = 7;
    soma += n.num4;
    printf("O valor de num4 é %d\n", n.num4);
    n.num5 = 9;
    soma += n.num5;
    printf("O valor de num5 é %d\n\n", n.num5);

    printf("O valor de num1 é %d\n", n.num1);
    printf("O valor de num2 é %d\n", n.num2);
    printf("O valor de num3 é %d\n", n.num3);
    printf("O valor de num4 é %d\n", n.num4);
    printf("O valor de num5 é %d\n", n.num5);

    printf("'n' está ocupando %ld bytes em memória\n", sizeof(n));

    printf("Soma = %d\n", soma);

    //economiza espaço de memória ao realizar operações, mas é preciso ter cuidado ao sobrescrever
    printf("Memória total ocupada %ld", sizeof(n) + sizeof(soma));

    return 0;
}
