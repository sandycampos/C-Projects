//opera��es matem�ticas
//somar(+), subtrair(-), multiplicar(*), dividir (/), exponencia��o(pow()), m�dulo[resto da divis�o](%)

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
    printf("A soma � %d\n", (int)res); //cast

    //subtrair
    res = num1 - num2;
    printf("A subtra��o � %d\n", (int)res); //cast

    //multiplicar
    res = num1 * num2;
    printf("A multiplica��o � %d\n", (int)res); //cast

    //dividir
    res = (float)num1 / (float)num2; //cast
    printf("A divis�o � %f\n", res);

    //pot�ncia
    res = pow(num1, num2);
    printf("O resultado � %d\n", (int)res); //cast

    //m�dulo (verificando se o num1 � par ou �mpar)
    if(num1 % 2 == 0) printf("%d � par", num1);
    else printf("%d � �mpar", num1);

    return 0;
}
