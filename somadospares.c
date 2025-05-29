#include <stdio.h>

int main()
{

    int n[5];
    int i = 0;
    int somaPares;

    while (i < 5)
    {
        scanf("%d", &n[i]);
        i++;
    }

    if (n[0] % 2 == 0 && n[1] % 2 == 0 && n[2] % 2 == 0 && n[3] % 2 == 0 && n[4] % 2 == 0)
    {
        somaPares = n[0] + n[1] + n[3] + n[4];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }
    else if (n[0] % 2 == 1)
    {
        somaPares = n[1] + n[3] + n[4];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }
    else if (n[1] % 2 == 1)
    {
        somaPares = n[0] + n[3] + n[4];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }
    else if (n[2] % 2 == 1)
    {
        somaPares = n[0] + n[3] + n[4];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }
    else if (n[3] % 2 == 1)
    {
        somaPares = n[0] + n[1] + n[4];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }
    else if (n[4] % 2 == 1)
    {
        somaPares = n[0] + n[2] + n[3];
        printf("a soma dos numeros pares é igual a %d.", somaPares);
    }

    return (0);
}