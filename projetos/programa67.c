#include<stdio.h>
#include<string.h>

//strtok
int main()
{
    char str1[] = "sandy@gmail.com";

    printf("Usu�rio: %s", strtok(str1, "@"));

    return 0;
}
