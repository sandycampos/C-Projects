#include<stdio.h>
#include<stdlib.h> //standard library

//malloc()
int main()
{
    int qtd, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); //3 * 4 bytes == 12 bytes

    for(int i = 0; i < qtd; i++)
    {
        printf("Informe o valor para a posição %d do vetor: ", i);
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < qtd; i++)
    {
        printf("No vetor 'numeros[%d]' está o valor: %d\n", i, p[i]);
    }

    printf("A variável 'p' ocupa %d bytes em memória.\n", qtd * sizeof(int));

    //liberar a memória (desalocar)
    free(p);
    p = NULL; //medida de segurança (anulando ponteiro para que ele não seja reutilizado)

    return 0;
}

/*
    Dessa forma, o vetor aloca 12 bytes mesmo declarando uma quantidade menor de elementos. Com o malloc() aloca-se apenas a quantidade de bytes realmente utilizada.

    int numeros[3];

    numeros[0] = 55; //0... (n - 1) -> 0... 2
    numeros[1] = 43;
    numeros[2] = 2;

    printf("A variável 'numeros[0]' vale %d e ocupa %ld bytes em memória.\n", numeros[0], sizeof(numeros[0]));
    printf("A variável 'numeros[1]' vale %d e ocupa %ld bytes em memória.\n", numeros[1], sizeof(numeros[1]));
    printf("A variável 'numeros[2]' vale %d e ocupa %ld bytes em memória.\n", numeros[2], sizeof(numeros[2]));
*/