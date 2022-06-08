//aula sobre funções: escrevendo funções

//biblioteca padrão para entrada e saída de dados
#include<stdio.h>

/*
    estrutura das funções
    - tipo de retorno
    - nome
    - parâmetros de entrada (opcional)
    - implementação
    - retorno (opcional)
*/

//void - > vazio (função sem retorno, só executa algo)
void mensagem()
//implementação
{
    printf("Bem-vindo!");
}

int soma(int num1, int num2)
{
    int res = num1 + num2;
    return res;
}

//caractere pode ser: 'a' ou '97' (ASCII)
void proximo_char(char caractere)
{
    printf("%c", caractere + 1);
}

//main -> principal
//a função main retorna para o SO
int main()
{
    printf("Olá...");
    //para o SO "0" significa "executei com sucesso"
    return 0;
}
