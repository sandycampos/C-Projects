#include<stdio.h>
#include<math.h>

int main()
{
    int angulo = 45;
    float res = tanh(angulo);

    printf("A tangente hiperb�lica de %d � %f", angulo, res);

    return 0;
}
