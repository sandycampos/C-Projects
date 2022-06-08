/*
    matrizes - parte 1
    matriz: array multidimensional
    char nome[3][50] (possui duas dimens�es: 3 nomes com at� 50 caracteres)

    array unidimensional (vetor)
    int numeros[5];
    [0][1][2][3][4]

    array multidimensional (matriz)
    int numeros[5][5];      [linhas] e [colunas]
    [0][1][2][3][4]         [00][01][02][03][04]
    [0][1][2][3][4]         [10][11][12][13][14]
    [0][1][2][3][4]         [20][21][22][23][24]
    [0][1][2][3][4]         [30][31][32][33][34]
    [0][1][2][3][4]         [40][41][42][43][44]

    vis�o computacional: o mundo em matrizes
*/

#include<stdio.h>

int main()
{
    //matrizes e strings
    char nome[3][50];
    //"a" � uma string
    for(int i = 0; i < 3; i++)
    {
        printf("Qual seu nome? ");
        gets(nome[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Ol�, %s\n", nome[i]);
    }

    return 0;
}
