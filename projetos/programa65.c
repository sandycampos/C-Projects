#include<stdio.h>
#include<string.h>

//strcmp
int main()
{
    char str1[20], str2[20];

    strcpy(str1, "Laranja");
    strcpy(str2, "laranja");

    if(strcmp(str1, str2)) printf("N�o s�o iguais."); //ATEN��O -> str1 != str2
    else printf("S�o iguais.");

    return 0;
}
