#include <stdio.h>

int main()
{

    int numero, i;

    scanf("%d", &numero);

    for (i = 1; i < 11; i++)
    { // declara um valor inicial 1, para 1, enquanto for menor que 10, acrescenta mais 1
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return (0);
}