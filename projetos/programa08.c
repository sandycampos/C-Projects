//tipos de dados
//tipos alfanuméricos: 'caracteres' (unidade) e "strings" (conjunto de caracteres)
//na linguagem C não existe o tipo String, é necessário utilizar vetores

#include<stdio.h>

int main()
{
    char opcao;

    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");
    printf("Informe uma opção: ");
    scanf("%c", &opcao);

    if(opcao == 'a') printf("Seu saldo é...\n");
    else if(opcao == 'b') printf("Extrato da conta...\n");
    else if(opcao == 'c') printf("Seu limite é...\n");
    else printf("Opção desconhecida...\n");

    //gerar alfabeto completo com um loop
    for(int i = 97; i <= 122; i++) printf("%c\n", i);

    return 0;
}
