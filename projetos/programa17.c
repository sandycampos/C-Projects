//aula sobre fun��es: escrevendo fun��es

//biblioteca padr�o para entrada e sa�da de dados
#include<stdio.h>

/*
    estrutura das fun��es
    - tipo de retorno
    - nome
    - par�metros de entrada (opcional)
    - implementa��o
    - retorno (opcional)
*/

//void - > vazio (fun��o sem retorno, s� executa algo)
void mensagem()
//implementa��o
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
//a fun��o main retorna para o SO
int main()
{
    printf("Ol�...");
    //para o SO "0" significa "executei com sucesso"
    return 0;
}
