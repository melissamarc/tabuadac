#include <stdio.h>

int main()
{
    int n, i = 0, j;
    scanf("%d", &n);

    int valores[n];

    // le os valores
    while (i < n)
    {
        scanf("%d", &valores[i]);
        i++;
    }

    // organiza os valores do maior p menor
    i = 0;
    while (i < n - 1)
    {
        j = 0;
        while (j < n - 1)
        {
            if (valores[j] > valores[j + 1])
            {
                int temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    // soma os n - 5 maiores valores e pula os menores
    int soma = 0;
    i = 5;
    while (i < n)
    {
        soma += valores[i];
        i++;
    }

    float media = (float)soma / (n - 5);

    printf("A media aritmetica eh %.2f.\n", media);

    return (0);
}
