#include<stdio.h>
#include<string.h>

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[5]; //0 at� 4

int main()
{
    //struct st_alunos alunos[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Informe a matr�cula do aluno: ");
        fgets(alunos[i].matricula, 10, stdin);
    
        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("Informe o curso do aluno: ");
        fgets(alunos[i].curso, 50, stdin);

        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        //getchar para n�o receber o enter e ir para o pr�ximo campo (scanf seguido de fgets)
        getchar(); 
    }

    for(int i = 0; i < 5; i++)
    {
        printf("=============== Dados do Aluno %d ===============\n", i + 1);
        printf("Matr�cula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }

    return 0;
}
