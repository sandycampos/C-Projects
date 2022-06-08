//enum = enumera��o

#include<stdio.h>

enum dias_da_semana
{
    segunda, //ao passar o mouse � poss�vel perceber que est� indexado
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
}; //as vari�veis s� poder�o assumir os valores dentro desse range de constantes

int main()
{
    enum dias_da_semana d1, d2;

    int numeros[5];

    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    d1 = quinta; //3
    d2 = 3; //quinta
    //d2 = 14; n�o apresenta erro, pois C permite acesso a elementos mesmo que eles n�o existam
    

    if(d1 == d2) printf("Os dias s�o iguais...\n");
    else printf("Os dias n�o s�o iguais\n");

    printf("numeros[0] = %d\n", numeros[0]);
    printf("numeros[4] = %d\n", numeros[4]);
    printf("numeros[14] = %d\n", numeros[14]);

    return 0;
}
