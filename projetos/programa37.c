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
    printf("O valor de num1 � %d\n", n.num1);
    n.num2 = 3;
    soma += n.num2;
    printf("O valor de num2 � %d\n", n.num2);
    n.num3 = 5;
    soma += n.num3;
    printf("O valor de num3 � %d\n", n.num3);
    n.num4 = 7;
    soma += n.num4;
    printf("O valor de num4 � %d\n", n.num4);
    n.num5 = 9;
    soma += n.num5;
    printf("O valor de num5 � %d\n\n", n.num5);

    printf("O valor de num1 � %d\n", n.num1);
    printf("O valor de num2 � %d\n", n.num2);
    printf("O valor de num3 � %d\n", n.num3);
    printf("O valor de num4 � %d\n", n.num4);
    printf("O valor de num5 � %d\n", n.num5);

    printf("'n' est� ocupando %ld bytes em mem�ria\n", sizeof(n));

    printf("Soma = %d\n", soma);

    //economiza espa�o de mem�ria ao realizar opera��es, mas � preciso ter cuidado ao sobrescrever
    printf("Mem�ria total ocupada %ld", sizeof(n) + sizeof(soma));

    return 0;
}
