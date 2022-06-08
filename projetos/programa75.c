#include<stdio.h>
#include<stdlib.h>

//realloc() -> realoca��o de mem�ria (alocada com malloc ou calloc)
int main()
{
    int qtd, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int));
    
    if(p)
    {
        printf("A vari�vel 'p' ocupa %ld bytes em mem�ria.\n", qtd * sizeof(int));

        printf("informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);

        p = (int*)realloc(p, qtd * sizeof(int));

        if(p) printf("A vari�vel 'p' ocupa %ld bytes em mem�ria.\n", qtd * sizeof(int));
        else printf("Erro: Mem�ria insuficiente!!!");
    }
    else printf("Erro: Mem�ria insuficiente!!!");

    free(p);
    p = NULL;

    return 0;
}
