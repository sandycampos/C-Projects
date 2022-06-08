#include<stdio.h>
#include<stdlib.h>

//div()
int main()
{
    div_t saida; //struct

    saida = div(27, 4);
    printf("O quociente de (27/4) é %d\n", saida.quot); //quociente
    printf("O resto de (27/4) é %d\n", saida.rem); //resto

    saida = div(27, 3);
    printf("O quociente de (27/3) é %d\n", saida.quot);
    printf("O resto de (27/3) é %d\n", saida.rem);

    return 0;
}
