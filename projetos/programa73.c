#include<stdio.h>
#include<stdlib.h> //standard library

//malloc()
int main()
{
    int qtd, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); //3 * 4 bytes == 12 bytes
    
    //checa se a mem�ria foi alocada
    if(p) printf("A vari�vel 'p' ocupa %ld bytes em mem�ria.\n", qtd * sizeof(int));
    else printf("Erro: Mem�ria insuficiente!!!");

    //liberar a mem�ria (desalocar)
    free(p);
    p = NULL; //medida de seguran�a (anulando ponteiro para que ele n�o seja reutilizado)

    return 0;
}
