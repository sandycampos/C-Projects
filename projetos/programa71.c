#include<stdio.h>
#include<time.h>

//localtime()
int main()
{
    time_t tempobruto; //declarando variável
    struct tm *info; //time_ t e tm vêm da biblioteca time

    time(&tempobruto); //time recebe a variável

    info = localtime(&tempobruto); //info recebe localtime passando a variável

    printf("Data e hora local: %s", asctime(info)); //converte hora para tabela asc e retorna string

    return 0;
}
