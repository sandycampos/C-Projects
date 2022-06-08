#include<stdio.h>
#include<string.h>

//strcmp
int main()
{
    char str1[20], str2[20];

    strcpy(str1, "Laranja");
    strcpy(str2, "laranja");

    if(strcmp(str1, str2)) printf("Não são iguais."); //ATENÇÃO -> str1 != str2
    else printf("São iguais.");

    return 0;
}
