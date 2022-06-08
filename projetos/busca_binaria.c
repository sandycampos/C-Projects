#include<stdio.h>

int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0, fim = tam -1;

    while(inicio <= fim){

        //encontra o meio do vetor
        int meio = (inicio + fim) / 2;

        //se a chave estiver no meio, retorna
        if(chave == vetor[meio]){
            return meio;
        }

        //se a chave for menor que o valor do meio, passa para o próximo elemento
        if(chave < vetor[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    //se não encontrar nada
    return -1;
}

int main(){

    //vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    //elemento chave que queremos encontra no vetor
    int chave = 5;

    //aplicando a Busca Binária
    int ret = busca_binaria(vetor, chave, 6);

    printf("\nO elemento %d está no posição %d\n\n", chave, ret);

    return 0;
}

//geek == unir