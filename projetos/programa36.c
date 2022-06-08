#include<stdio.h>
#include<string.h>

//a union separa e utiliza apenas o espaço da maior variável
union pessoa
{
    char nome[100]; //1 char = 1 byte -> 1 * 100 = 100 bytes
    int idade; //4 bytes -> total de 104 bytes
}; //pes

//[Angelina Jolie] -> [39] (sobrescreve)
int main()
{
    union pessoa pes;

    strcpy(pes.nome, "Angelina Jolie"); //copiando "Angelina Jolie" para variável pes.nome
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("Dados de %s\n", pes.nome);

    printf("A variável 'pes' está ocupando %ld bytes em memória.", sizeof(pes));

/*
    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;

    //sizeof(int)
    printf("A variável 'numero' tem valor %d e ocupa %ld bytes em memória\n", numero, sizeof(numero));
    printf("A variável 'nota' tem valor %.2f e ocupa %ld bytes em memória\n", nota, sizeof(nota));
    printf("A variável 'letra' tem valor %c e ocupa %ld bytes em memória\n", letra, sizeof(letra));
    printf("A variável 'outraNota' tem valor %c e ocupa %ld bytes em memória\n", outraNota, sizeof(outraNota));
*/
    return 0;
}

