/*
    compilação via terminal

    gcc nome-do-programa.c -o nome-do-prorama-executavel.qualquer-coisa

    gcc arquivo-fonte (obrigatório)
    -o nome-do-programa-executavel.qualquer-coisa (opcional)
    .qualquer-coisa (opcional)
*/

#include<stdio.h>

int main()
{
    int qtd, soma = 0;

    printf("Quantos números você quer somar? ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++)
    {
        soma = soma + i * 2 + 3; 
    }

    printf("A soma é %d", soma);

    return 0;
}
