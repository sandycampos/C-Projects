//estrutura de repetição

//while (enquanto): utilizado quando você precisa de um loop que não tenha um número de elementos, mas tenha um critério de parada, e antes de iniciar a condição seja checada

/*
Problema:
Faça um programa que receba e some números inteiros até que o número de entrada seja 0, e apresente a soma no final.
*/

#include<stdio.h>

int main()
{
    int numero, soma = 0;

    //entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    //processamento
    while(numero != 0)
    {
        soma = soma + numero;
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);
        printf("A soma é %d", soma);
    }
    
    return 0;
}