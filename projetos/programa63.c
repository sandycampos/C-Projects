#include<stdio.h>
#include<ctype.h>

int main()
{
    char teste = 'H';

    if(isalnum(teste)) printf("� alfanum�rico\n"); //is = �
    else printf("N�o � alfanum�rico\n");

    if(isalpha(teste)) printf("� alfab�tico\n");
    else printf("N�o � alfab�tico\n");

    if(isdigit(teste)) printf("� d�gito\n");
    else printf("N�o � d�gito\n");

    if(islower(teste)) printf("� min�sculo\n");
    else printf("N�o � min�sculo\n");

    if(isupper(teste)) printf("� mai�sculo\n");
    else printf("N�o � mai�sculo\n");

    if(ispunct(teste)) printf("� pontua��o\n");
    else printf("N�o � pontua��o\n");

    if(isspace(teste)) printf("� espa�o\n");
    else printf("N�o � espa�o\n");

    printf("A letra %c em mai�sculo � %c\n", teste, toupper(teste));
    printf("A letra %c em min�sculo � %c\n", teste, tolower(teste));

    return 0;
}
