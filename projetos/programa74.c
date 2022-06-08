/*
    qtd = 3

    malloc()
    [3][66][99]

    calloc()
    [3][66][99]
    [0][0][0]
*/

#include<stdio.h>
#include<stdlib.h>

//calloc()
int main()
{
    int qtd = 3, *p;

    //p = (int*)malloc(qtd * sizeof(int)); //não remove lixo da memória
    p = (int*)calloc(qtd, sizeof(int)); //zera o espaço em memória

    if(p)
    {
        //p[0] = 6;
        //p[1] = 12;
        //p[2] = 34;

        printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));
        printf("Valor de p[0] = %d\n", p[0]);
        printf("Valor de p[1] = %d\n", p[1]);
        printf("Valor de p[2] = %d\n", p[2]);
    }
    else printf("Erro: Memória insuficiente!!!");

    free(p);
    p = NULL;

    return 0;
}
