//tipos de dados
//tipos alfanum�ricos: 'caracteres' (unidade) e "strings" (conjunto de caracteres)
//na linguagem C n�o existe o tipo String, mas � poss�vel trabalhar utilizando vetores

//A LINGUAGEM C ALOCA UM '\0' PARA FINALIZAR A STRING

#include<stdio.h>

int main()
{
    //declara��o de uma String em C
    char nome[6]; //vetor: array do tipo char que suporta at� 5 caracteres (array de caracteres)

    printf("Qual � seu nome? ");
    //gets(nome); //aceitou mais caracteres que o permitido
    fgets(nome, 6, stdin);

    printf("Seu nome � %s", nome);
}
