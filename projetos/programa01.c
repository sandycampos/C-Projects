//aula sobre variáveis

//biblioteca para trabalhar com entrada e saÃ­da padrão (In e Out)
#include<stdio.h>

//main -> principal (é a função que inicia quando um programa C é executado)
int main(){ //a chave delimita um bloco de código (início do bloco)

    //declarando variáveis
    int idade; //inteiro

    //declarando e inicializando variáveis
    //int idade = 0;

    //função para escrever algo na saída padrão (console)
    printf("\nQual é a sua idade? "); //o ponto e vírgula finaliza um comando
    //1 parâmetro

    //receber dados
    scanf("%d", &idade); //entre parêntesis estão os argumentos 
    //2 parâmetros
    //parâmetros são separados por vírgula

    //saída
    printf("A sua idade é %d\n\n", idade);

    return 0;
} //fim do bloco

/*

Compilador é um programa que ajuda a compilar o código fonte (texto) para a linguagem de máquina, tornando-o um executável para o SO. Por essa razão a linguagem C não é multiplataforma (uma vez compilado no linux, só funciona no linux). Logo, o executável só funciona no SO em que foi gerado.

gcc programa1.c -o programa1.exe
dir

*/
