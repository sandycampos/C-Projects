#include<stdio.h>
#include<time.h>

//localtime()
int main()
{
    time_t tempobruto; //declarando vari�vel
    struct tm *info; //time_ t e tm v�m da biblioteca time

    time(&tempobruto); //time recebe a vari�vel

    info = localtime(&tempobruto); //info recebe localtime passando a vari�vel

    printf("Data e hora local: %s", asctime(info)); //converte hora para tabela asc e retorna string

    return 0;
}
