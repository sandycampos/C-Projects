//operações matemáticas
//somar(+), subtrair(-), multiplicar(*), dividir (/), exponenciação(pow()), módulo[resto da divisão](%)

#include<stdio.h>

int main()
{
    int num1, num2;
    float res;

    printf("Informe o num1: ");
    scanf("%d", &num1);

    printf("Informe o num2: ");
    scanf("%d", &num2);

    //soma
    res = num1 + num2;
    printf("A soma é %d\n", (int)res); //cast

    //subtrair
    res = num1 - num2;
    printf("A subtração é %d\n", (int)res); //cast

    //multiplicar
    res = num1 * num2;
    printf("A multiplicação é %d\n", (int)res); //cast

    //dividir
    res = (float)num1 / (float)num2; //cast
    printf("A divisão é %f\n", res);

    //potência
    res = pow(num1, num2);
    printf("O resultado é %d\n", (int)res); //cast

    //módulo (verificando se o num1 é par ou ímpar)
    if(num1 % 2 == 0) printf("%d é par", num1);
    else printf("%d é ímpar", num1);

    return 0;
}
