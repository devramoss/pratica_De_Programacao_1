#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 1)
    {
        printf("%d é ímpar", n);
    }
    else
    {
        printf("%d é par", n);
    }
}