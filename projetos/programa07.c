//tipos de dados
//tipos numéricos: inteiros e reais

#include<stdio.h>

int main()
{
    //inteiro
    //int nota1, nota2; //7, 890, ...

    //reais
    float media, nota1; //23.4, 1.23, ... 0123456789
    double nota2; //23.4, 1.23, ... 01234567891011121314 suporta uma quantidade maior de dados

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua média é %.1f", media);

    return 0;
}