//estruturas de repeti��o: for, while, do while (para, enquanto, fa�a enquanto)

/*
Utilizando o For (para)

Fa�a um programa que receba e some 5 n�meros inteiros e apresente a soma no final.
*/
#include<stdio.h>

int main()
{
    //vari�veis
    int numero, soma = 0;

    //para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
    //inicializa��o; crit�rio de parada; forma de incremento
    for(int i = 0; i < 5; i++)
    {
        //entrada
        printf("Informe um n�mero: ");
        scanf("%d", &numero);
    
        //processamento
        soma = soma + numero;
    }

    //sa�da
    printf("A soma � %d", soma);

    return 0;
}