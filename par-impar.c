#include <stdio.h>

// % significa resto da divisao

int main()
{
    int num;

    scanf("%d", &num);

    if (num % 2 == 0)
    { // se o resto da divisao do numero por 2 for igual a 0
        printf("o número digitado é par!");
    }

    if (num % 2 == 1)
    {
        printf("o numero digitado é impar!");
    }

    return (0);
}