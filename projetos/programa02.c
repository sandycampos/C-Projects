//estruturas de decis�o: if, else, else if (se, ent�o, ent�o se)

#include<stdio.h>

int main(){

    //declara��o de vari�veis
    int idade;

    //entrada
    printf("Qual � a sua idade? ");
    scanf("%d", &idade);


    //processamento
    if(idade < 18){
        printf("Voc� � menor de idade.");
    } else if(idade >= 18 && idade < 60){
        printf("Voc� � adulto.");
    } else{
        printf("Voc� � idoso.");
    }

    //sa�da
    printf("\nSua idade � %d", idade);

    return 0;

}
