//estrutura de repeti��o

//while (enquanto): utilizado quando voc� precisa de um loop que n�o tenha um n�mero de elementos, mas tenha um crit�rio de parada, e antes de iniciar a condi��o seja checada

/*
Problema:
Fa�a um programa que receba e some n�meros inteiros at� que o n�mero de entrada seja 0, e apresente a soma no final.
*/

#include<stdio.h>

int main()
{
    int numero, soma = 0;

    //entrada
    printf("Informe um n�mero: ");
    scanf("%d", &numero);

    //processamento
    while(numero != 0)
    {
        soma = soma + numero;
        //entrada
        printf("Informe um n�mero: ");
        scanf("%d", &numero);
        printf("A soma � %d", soma);
    }
    
    return 0;
}