#include<stdio.h>

void select_sort(int vetor[], int tam){
    int menor, troca;

    //loop externo para repassar todo o vetor
    for(int i = 0; i < (tam - 1); i++){
        menor = i; //posição do menor

        //loop interno para trabalhar com o próximo elemento
        for(int j = (i + 1); j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        //ocorrendo a troca
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

int main(){
    //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    //função de ordenação utilizando Select Sort
    select_sort(vetor, 6);

    //apresenta o vetor ordenado
    for(int i = 0; i < 6; i++) printf("%d\n", vetor[i]);

    return 0;
}

//unir > geek (complexidade de algoritmos)
