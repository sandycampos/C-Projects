//tipos de dados
//tipos alfanum�ricos: 'caracteres' (unidade) e "strings" (conjunto de caracteres)
//na linguagem C n�o existe o tipo String, � necess�rio utilizar vetores

#include<stdio.h>

int main()
{
    char opcao;

    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");
    printf("Informe uma op��o: ");
    scanf("%c", &opcao);

    if(opcao == 'a') printf("Seu saldo �...\n");
    else if(opcao == 'b') printf("Extrato da conta...\n");
    else if(opcao == 'c') printf("Seu limite �...\n");
    else printf("Op��o desconhecida...\n");

    //gerar alfabeto completo com um loop
    for(int i = 97; i <= 122; i++) printf("%c\n", i);

    return 0;
}
