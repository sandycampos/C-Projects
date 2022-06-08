/*
    matrizes - parte 2

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
*/

#include<stdio.h>

int main()
{
/*
    matrizes de inteiros
    [00][01]
    [10][11]
*/
    int numeros[2][2];

    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0; i < 2; i++) //linhas
    {
        for(int j = 0; j < 2; j++) //colunas
        {
            printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }

    //matrizes e reais
    float valores[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Digite um valor: ");
            scanf("%f", &valores[i][j]);
        }
    }
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("valores[%d][%d] vale %.2f\n", i, j, valores[i][j]);
        }
    }

    return 0;
}
