//estruturas de repeti��o
//do while (fa�a enquanto): utilizado quando voc� precisa de um loop que n�o tenha um n�mero fixo de elementos, mas que tenha um crit�rio de parada, sendo que a condi��o de parada � checada ap�s a primeira execu��o.

#include<stdio.h>

int main()
{
    int numero, soma = 0;

    //processamento
    do
    {
        //entrada
        printf("Informe um n�mero: ");
        scanf("%d", &numero);

        //processamento
        soma = soma + numero;
    }
    while(numero != 0);
    
    printf("A soma � %d", soma);

    return 0;
}