#include<stdio.h>
#include<time.h>

//time() -> retorna o tempo atual baseado no Unix times temp (https://pt.wikipedia.org/wiki/Era_Unix)
int main()
{
    time_t segundos;

    segundos = time(NULL); //desde o tempo 0 até agora
    printf("Horas desde 1 de Janeiro de 1970 = %ld\n", segundos / 3600); //1 hora

    return 0;
}
