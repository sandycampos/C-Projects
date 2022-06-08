#include<stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
    
    //vetor tempor�rio para o merge
    int temp[50];

    //vari�veis auxiliares
    int i, j, k;

    //in�cio do primeiro grupo
    i = inicio1;

    //in�cio do segundo grupo
    j = inicio2;
    k = 0;

    //enquanto tiver elementos em ambos os grupos
    while(i <= fim1 && j <= fim2){

        //faz a ordena��o de acordo com cada grupo
        if(vetor[i] < vetor[j]){
            temp[k++] = vetor[i++];
        }else{
            temp[k++] = vetor[j++];
        }
    }

    //copia os elementos restantes do primeiro grupo
    while(i <= fim1){
        temp[k++] = vetor[i++];
    }

    //copia os elementos restantes do segundo grupo
    while(j <= fim2){
        temp[k++] = vetor[j++];
    }

    //tranfere ps elementos do vetor tempor�rio para o original
    for(i = inicio1, j = 0; i <= fim2; i++, j++){
        vetor[i] = temp[j];
    }
}

void merge_sort(int vetor[], int inicio, int fim){
    
    //condi��o de parada da recurs�o
    if(inicio < fim){

        //calcular o meio do vetor
        int meio = (inicio + fim) / 2;

        //recurs�o esquerda
        merge_sort(vetor, inicio, meio);

        //recurs�o direita
        merge_sort(vetor, meio + 1, fim);

        //faz o merge (junta) com os dois grupos de vetores ordenados
        merge(vetor, inicio, meio, meio + 1, fim);
    }
}

int main(){
    //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    //fun��o de ordena��o utilizando Merge Sort
    //vetor, in�cio, fim
    merge_sort(vetor, 0, 6 - 1);

    //apresenta o vetor ordenado
    for(int i = 0; i < 6; i++) printf("%d\n", vetor[i]);

    return 0;
}
