#include<stdio.h>

int main()
{
    //FILE == arquivo
    FILE *arq;
/*
    fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    w - abrir o arquivo para escrita (se o arquivo j� existir, ser� sobrescrito com um novo, zerado)
    r - abrir o arquivo para leitura (n�o podemos escrever no arquivo)
    a - abrir o arquivo para adi�ao de conte�do (se o arquivo j� existir, o conte�do ser� adicionado nas linhas abaixo)
*/    
    arq = fopen("arquivo.txt", "w");

    //sempre que a gente finalizar a manipula��o de um arquivo, devemos fech�-lo
    fclose(arq);

    return 0;
}
