#include<stdio.h>
#include<string.h>

//strchr
int main()
{
    char str1[] = "sandy@gmail.com";
    char car = '@';
    char *ret = strchr(str1, car);

    printf("A partir do %c está %s", car, ret);

    return 0;
}
