//estruturas de decisão: if, else, else if (se, então, então se)

#include<stdio.h>

int main(){

    //declaração de variáveis
    int idade;

    //entrada
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);


    //processamento
    if(idade < 18){
        printf("Você é menor de idade.");
    } else if(idade >= 18 && idade < 60){
        printf("Você é adulto.");
    } else{
        printf("Você é idoso.");
    }

    //saída
    printf("\nSua idade é %d", idade);

    return 0;

}
