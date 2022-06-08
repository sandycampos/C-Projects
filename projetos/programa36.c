#include<stdio.h>
#include<string.h>

//a union separa e utiliza apenas o espa�o da maior vari�vel
union pessoa
{
    char nome[100]; //1 char = 1 byte -> 1 * 100 = 100 bytes
    int idade; //4 bytes -> total de 104 bytes
}; //pes

//[Angelina Jolie] -> [39] (sobrescreve)
int main()
{
    union pessoa pes;

    strcpy(pes.nome, "Angelina Jolie"); //copiando "Angelina Jolie" para vari�vel pes.nome
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("Dados de %s\n", pes.nome);

    printf("A vari�vel 'pes' est� ocupando %ld bytes em mem�ria.", sizeof(pes));

/*
    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;

    //sizeof(int)
    printf("A vari�vel 'numero' tem valor %d e ocupa %ld bytes em mem�ria\n", numero, sizeof(numero));
    printf("A vari�vel 'nota' tem valor %.2f e ocupa %ld bytes em mem�ria\n", nota, sizeof(nota));
    printf("A vari�vel 'letra' tem valor %c e ocupa %ld bytes em mem�ria\n", letra, sizeof(letra));
    printf("A vari�vel 'outraNota' tem valor %c e ocupa %ld bytes em mem�ria\n", outraNota, sizeof(outraNota));
*/
    return 0;
}

