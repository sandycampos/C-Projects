#include<stdio.h>

int main()
{
    FILE *arq;
    char fruta[10];

    //arq = fopen("frutasP.txt", "a"); //append = adicionar
    arq = fopen("frutasP.txt", "a"); //arquivo n�o existe, ent�o ser� criado

    if(arq)
    {
        printf("Informe uma fruta ou 0 para sair: \n");
        fgets(fruta, 10, stdin); //stdin = standard input = entrada padr�o
        while(fruta[0] != '0')
        {
            fputs(fruta, arq);
            printf("Informe uma fruta ou 0 para sair: \n");
            fgets(fruta, 10, stdin); 
        }
    }
    else printf("N�o foi poss�vel criar o arquivo.");

    fclose(arq);

    return 0;
}
