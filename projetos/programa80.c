#include<stdio.h>
#include<stdlib.h>

struct st_arvore{
    int valor;
    struct st_arvore *sad; //sub-·rvore direita
    struct st_arvore *sae; //sub-·rvore esquerda
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int arvoreEstaVazia(arvore* t){
    return t == NULL;
}

void mostraArvore(arvore* t){
    printf("<");
    if(!arvoreEstaVazia(t)){
        printf("%d ", t->valor);
        mostraArvore(t->sae);
        mostraArvore(t->sad);
    }
    printf(">");
}

void insereDadoArvore(arvore** t, int num){
    if(*t == NULL){
        *t = (arvore*)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    }else{
        if(num < (*t)->valor){
            insereDadoArvore(&(*t)->sae, num);
        }
        if(num > (*t)->valor){
            insereDadoArvore(&(*t)->sad, num);
        }
    }
}

//busca em ·rvore bin·ria
int estaNaArvore(arvore* t, int num){
    if(arvoreEstaVazia(t)){
        return 0; //se a ·rvore est· vazia, o n˙mero n„o est· ali
    }
    return t->valor == num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num); //recursividade
}

int main(){
    arvore* t = criaArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);

    mostraArvore(t);

    if(arvoreEstaVazia(t)){
        printf("\n\n¡rvore vazia!\n");
    }else{
        printf("\n\n¡rvore N√O est· vazia!\n");
    }

    if(estaNaArvore(t, 15)){
        printf("\nO elemento 15 pertence ‡ ·rvore!\n");
    }else{
        printf("\nO elemento 15 n„o pertence ‡ ·rvore!\n");
    }

    if(estaNaArvore(t, 22)){
        printf("\nO elemento 22 pertence ‡ ·rvore!\n");
    }else{
        printf("\nO elemento 22 n„o pertence ‡ ·rvore!\n");
    }

    free(t);
}
