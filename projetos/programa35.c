//typedef -> redefinir (renomear/apelidar) tipos

#include<stdio.h>

int main()
{
    typedef float nota; //4 bytes

    //declarando vari�veis
    nota prova1 = 7.0;
    nota prova2 = 6.0;
    nota soma = prova1 + prova2;

    printf("A soma das notas � %.2f", soma);

    return 0;
}
