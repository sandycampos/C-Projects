/*
Switch

- usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if else

# pseudoc�digo

Escolha(variavel)
Inicio
    Caso valor1:
        Instru��es
    Caso valor2:
        Instru��es
    ...
    Caso valorN:
        Instru��es
Fim

# na linguagem C

switch(variavel)
{
    case valor1:
        instrucoes;
        break;
    case valor2:
        instrucoes;
        break;
    default:
        intrucoes;
}
*/

#include<stdio.h>

int main()
{
    int valor;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("Domingo\n");
        //break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Ter�a\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
        case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
        case 7:
        printf("S�bado\n");
        break;
    default:
        printf("Valor inv�lido");
    }
}