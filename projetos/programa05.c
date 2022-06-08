//estruturas de repetição
//do while (faça enquanto): utilizado quando você precisa de um loop que não tenha um número fixo de elementos, mas que tenha um critério de parada, sendo que a condição de parada é checada após a primeira execução.

#include<stdio.h>

int main()
{
    int numero, soma = 0;

    //processamento
    do
    {
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);

        //processamento
        soma = soma + numero;
    }
    while(numero != 0);
    
    printf("A soma é %d", soma);

    return 0;
}