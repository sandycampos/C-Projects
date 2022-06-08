#include<stdio.h>
#include<stdlib.h>

//Lista Encadeada
struct st_no{
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

int vazia(no *le){
    if(le->prox == NULL) return -1;
    else return 0;
}

void inicia(no *le){
    le->prox = NULL; //inicia apontando para o vazio
}

void libera(no *le){
    if(!vazia(le)){
        no *proxNo, *atual;
        atual = le->prox;
        while(atual != NULL){
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void exibe(no *le){
    if(vazia(le)){
        printf("Lista est� vazia!\n\n");
        return;
    }

    no *tmp; //tempor�ria
    tmp = le->prox;

    while (tmp != NULL){
        printf("-|%d|-", tmp->valor);
        tmp = tmp->prox;
    }
    printf("\n\n"); 
}

void insereInicio(no *le){
    no *novo = (no*)malloc(sizeof(no)); //aloca��o din�mica
    
    if(!novo){
        printf("Sem mem�ria dispon�vel!\n");
        exit(1);
    }
    printf("Informe o valor: ");
    scanf("%d", &novo->valor);

    no *oldHead = le->prox;

    le->prox = novo;
    novo->prox = oldHead;
}

void insereFim(no *le){
    no *novo = (no*)malloc(sizeof(no));

    if(!novo){
    printf("Sem mem�ria dispon�vel!\n");
    exit(1);
    }
    printf("Informe o valor: ");
    scanf("%d", &novo->valor);
    novo->prox = NULL;

    if(vazia(le)){
        le->prox = novo;
    }else{
        no *tmp = le->prox;

        while(tmp->prox != NULL){
            tmp = tmp->prox;
            }
        tmp->prox = novo;
    }
}

void opcao(no *le, int op){
    switch (op){
    case 0:
        libera(le);
        break;
    case 1:
        exibe(le);
        break;
    case 2:
        insereInicio(le);
        break;
    case 3:
        insereFim(le);
        break;
    case 4:
        inicia(le);
        break;
    default:
        printf("Comando inv�lido!\n\n");
        break;
    }
}

int menu(){
    int opt;
    printf("Escolha a op��o: \n");
    printf("[0] - Sair\n");
    printf("[1] - Exibir\n");
    printf("[2] - Adicinar n� no in�cio\n");
    printf("[3] - Adicionar n� no fim\n");
    printf("[4] - Zerar lista\n");
    printf("Op��o: ");
    scanf("%d", &opt);

    return opt;
}

int main(){
    no *le = (no*)malloc(sizeof(no));

    if(!le){
        printf("Sem mem�ria dispon�vel!");
        exit(1);
    }
    inicia(le);

    int opt;

    do{
        opt = menu();
        opcao(le, opt);
    }while(opt); //0 == false
    free(le);
    return 0;
}
