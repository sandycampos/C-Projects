#include<stdio.h>
#define TAMFILA 10

//Fila/Queue (https://www.cs.usfca.edu/~galles/visualization/QueueArray.html)
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void lista_elementos()
{
    printf("\n=================== FILA ATUAL ===================\n");
    for(int i = 0; i < TAMFILA; i++)
    {
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\n\nHead: %d\n", head); //pr�ximo a ser atendido
    printf("Tail: %d", tail); //�ltimo da fila
    printf("\n\n");
}

void enqueue()
{
    int val;
    if(tail < TAMFILA) //se o n�mero de elementos for menor que o tamanho da fila
    {
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail++;
        lista_elementos();
    }
    else printf("A fla est� cheia...\n");
}

void dequeue()
{
    if(head < tail)
    {
        fila[head] = 0;
        head++;
        lista_elementos();
    }
    else printf("A fila est� vazia");
}

void clear()
{
    for(int i = 0; i < TAMFILA; i++) fila[i] = 0;
    head = 0;
    tail = 0;
}

int main()
{
    int opcao = 0;

    do
    {
        printf("Selecione a op��o\n");
        printf("[1] - Inserir (enqueue)\n");
        printf("[2] - Remover (dequeue)\n");
        printf("[3] - Listar\n");
        printf("[4] - Limpar a fila (clear)\n");
        printf("[-1] - Sair\n\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Op��o inv�lida\n\n");
            break;
        }
    }
    while (opcao != -1);
    
    return 0;
}
