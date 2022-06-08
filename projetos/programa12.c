/*
    vetores - parte 1
    vetor: array unidimensional
    char nome[50]; (possui uma única dimensão: 50 caracteres)
*/

#include<stdio.h>

int main()
{
    //vetores e strings
    char nome[50];
    //"a" é uma string
    printf("Qual seu nome? ");
    gets(nome);
    printf("Olá, %s\n", nome);

    //vetores e caracteres
    char letras[26]; //0... 26 - 1
    //'a' é um caractere
    int contador = 0;
    for(int i = 97; i <= 122; i++)
    {
        letras[contador] = i;
        contador++;
    }
    //imprimindo as letras e seus valores em decimal
    for(int i = 0; i < 26; i++) printf("%d == %c\n", letras[i], letras[i]);
    //char l = 'l';
    //char a = 97;

    //vetores de inteiros
    int numeros[10];

    //vetores e reais
    float valores[5];

    return 0;
}
