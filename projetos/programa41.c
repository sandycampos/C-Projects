#include<stdio.h>

//ifdef - diretiva de compila��o
//#ifndef PI //cria, caso n�o exista
    //#define PI 3.14567
//#endif

int main()
{
    int valor = 5;

    valor = 467; 

    printf("O valor � %d\n", valor);

    //printf("PI vale %f\n", 2 * PI);

    #ifdef PI //executa, caso exista
        printf("O valor de PI � %f\n", PI);
    #endif

    return 0;
}
