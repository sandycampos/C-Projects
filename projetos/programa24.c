#include<stdio.h>

int main()
{
/*
      0   1   2   3   4
    ---------------------
    | 1 | 2 | 3 | 4 | 5 |
    ---------------------                               __________________
                                                       |                  |
    int = 4 bytes                                      | bit = 0 / 1      |
    0000 0000 0000 0000 0000 0000 0000 0001 = 1        | byte = 0000 0001 |
    0000 0000 0000 0000 0000 0000 0000 0010 = 2        |__________________|
*/
    int valores[5] = {1, 2, 3, 4, 5}; //declaração e inicialização do vetor

    for(int i = 0; i < 5; i++)
    {
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }
    //5 elementos x 4 bytes
    printf("O array valores possui %ld bytes\n", sizeof(valores)); 

    printf("valores[0] vale %d e o endereço de memória é %p\n", valores[0], valores[0]);
    //a linguagem C cria um ponteiro quando quando é feita a declaração de um vetor ou de uma matriz, apontando esse ponteiro para a primeira posição desse vetor (é possível fazer acesso sequencial a esses valores)
    //acesso via ponteiro
    printf("*(valores) vale %d e o endereço de memória é %p\n", *(valores), *(valores));
    printf("*(valores + 1) vale %d e o endereço de memória é %p\n", *(valores + 1), *(valores + 1));
    printf("*(valores + 2) vale %d e o endereço de memória é %p\n", *(valores + 2), *(valores + 2));
    printf("*(valores + 3) vale %d e o endereço de memória é %p\n", *(valores + 3), *(valores + 3));
    printf("*(valores + 4) vale %d e o endereço de memória é %p\n", *(valores + 4), *(valores + 4));

    return 0;
}
