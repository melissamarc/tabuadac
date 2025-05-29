#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    int zero = 0;

    scanf("%d"
          "%d"
          "%d"
          "%d",
          &n1, &n2, &n3, &n4);

    // verificando n1
    if (n1 % 2 == 0)
    {
        printf("o numero %d é par.\n", n1);
    }
    else if (n1 % 2 == 1)
    {
        printf("o numero %d é impar.\n", n1);
    }
    else if (n1 == 0)
    {
        printf("o primeiro numero é %d.\n", zero);
    }

    // verificando n2
    if (n2 % 2 == 0)
    {
        printf("o numero %d é par.\n", n2);
    }
    else if (n2 % 2 == 1)
    {
        printf("o numero %d é impar.\n", n2);
    }
    else if (n2 == 0)
    {
        printf("o segundo numero é %d.\n", zero);
    }

    // verificando n3
    if (n3 % 2 == 0)
    {
        printf("o numero %d é par.\n", n3);
    }
    else if (n3 % 2 == 1)
    {
        printf("o numero %d é impar.\n", n3);
    }
    else if (n3 == 0)
    {
        printf("o terceiro numero é %d.\n", zero);
    }

    // verificando n4
    if (n4 % 2 == 0)
    {
        printf("o numero %d é par.\n", n4);
    }
    else if (n4 % 2 == 1)
    {
        printf("o numero %d é impar.\n", n4);
    }
    else if (n4 == 0)
    {
        printf("o quarto numero é %d.\n", zero);
    }

    return (0);
}