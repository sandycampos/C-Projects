//aula sobre vari�veis

//biblioteca para trabalhar com entrada e saída padr�o (In e Out)
#include<stdio.h>

//main -> principal (� a fun��o que inicia quando um programa C � executado)
int main(){ //a chave delimita um bloco de c�digo (in�cio do bloco)

    //declarando vari�veis
    int idade; //inteiro

    //declarando e inicializando vari�veis
    //int idade = 0;

    //fun��o para escrever algo na sa�da padr�o (console)
    printf("\nQual � a sua idade? "); //o ponto e v�rgula finaliza um comando
    //1 par�metro

    //receber dados
    scanf("%d", &idade); //entre par�ntesis est�o os argumentos 
    //2 par�metros
    //par�metros s�o separados por v�rgula

    //sa�da
    printf("A sua idade � %d\n\n", idade);

    return 0;
} //fim do bloco

/*

Compilador � um programa que ajuda a compilar o c�digo fonte (texto) para a linguagem de m�quina, tornando-o um execut�vel para o SO. Por essa raz�o a linguagem C n�o � multiplataforma (uma vez compilado no linux, s� funciona no linux). Logo, o execut�vel s� funciona no SO em que foi gerado.

gcc programa1.c -o programa1.exe
dir

*/
