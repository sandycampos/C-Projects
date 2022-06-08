#include<stdio.h>

int main()
{
    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("arquivo01.txt", "r");

    if(arq)
    {
        while (!feof(arq))
        {
            resultado = fscanf(arq, "%d", &num);
            //printf("Resultado: %d\n", resultado);
            if(resultado == 1) soma += num; //para não repetir o último valor encontrado (40)
        }
    }
    else printf("Não achei o arquivo");
    printf("A soma dos números encontrados é %d", soma);
    fclose(arq);

    return 0;
}
