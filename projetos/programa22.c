#include<stdio.h>

int main()
{
    int n; //vari�vel que guarda o seu valor na mem�ria

    //declarando o ponteiro
    int* p; //ponteiro � um valor que aponta para um endere�o de mem�ria

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    //inicializando o ponteiro
    p = &n;

    printf("O n�mero informado foi %d\n", n);

    printf("Endere�o de mem�ria: %p\n", &n); //formato num�rico do endere�o de mem�ria

    printf("Endere�o do ponteiro: %p\n", p); //endere�o real da mem�ria (hexadecimal)

    return 0;
}
