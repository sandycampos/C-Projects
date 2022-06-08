#include<stdio.h>
#include<stdlib.h>

//realloc() -> realocação de memória (alocada com malloc ou calloc)
int main()
{
    int qtd, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int));
    
    if(p)
    {
        printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));

        printf("informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);

        p = (int*)realloc(p, qtd * sizeof(int));

        if(p) printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));
        else printf("Erro: Memória insuficiente!!!");
    }
    else printf("Erro: Memória insuficiente!!!");

    free(p);
    p = NULL;

    return 0;
}
