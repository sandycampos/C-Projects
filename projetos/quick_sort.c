#include<stdio.h>

void quick_sort(int vetor[], int tam){
    int i, j, grupo, troca;

    //crit�rio de parada da recursividade
    if(tam < 2){
        return; //sai da fun��o
    }else{
        grupo = vetor[tam/2];
    }

    //fazendo um loop �nico se comportar como dois
    for(i = 0, j = tam - 1;; i++, j--){

        //faz a movimenta��o dos elementos no vetor
        while(vetor[i] < grupo) i++;
        while(grupo < vetor[j]) j--;

        //crit�rio de parada do loop
        if(i >= j){
            break;
        }else{
            //onde ocorrem as trocas
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }

    //usa a recursividade para ordenar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - i);
}

int main(){
    //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    //fun��o de ordena��o utilizando Quick Sort
    quick_sort(vetor, 6);

    //apresenta o vetor ordenado
    for(int i = 0; i < 6; i++) printf("%d\n", vetor[i]);

    return 0;
}

//geek > unir
