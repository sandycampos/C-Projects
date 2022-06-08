#include<stdio.h>
#include<stdlib.h> //standard library

//malloc()
int main()
{
    int qtd, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); //3 * 4 bytes == 12 bytes
    
    //checa se a memória foi alocada
    if(p) printf("A variável 'p' ocupa %ld bytes em memória.\n", qtd * sizeof(int));
    else printf("Erro: Memória insuficiente!!!");

    //liberar a memória (desalocar)
    free(p);
    p = NULL; //medida de segurança (anulando ponteiro para que ele não seja reutilizado)

    return 0;
}
