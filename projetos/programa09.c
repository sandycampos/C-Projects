//tipos de dados
//tipos alfanuméricos: 'caracteres' (unidade) e "strings" (conjunto de caracteres)
//na linguagem C não existe o tipo String, mas é possível trabalhar utilizando vetores

//A LINGUAGEM C ALOCA UM '\0' PARA FINALIZAR A STRING

#include<stdio.h>

int main()
{
    //declaração de uma String em C
    char nome[6]; //vetor: array do tipo char que suporta até 5 caracteres (array de caracteres)

    printf("Qual é seu nome? ");
    //gets(nome); //aceitou mais caracteres que o permitido
    fgets(nome, 6, stdin);

    printf("Seu nome é %s", nome);
}
