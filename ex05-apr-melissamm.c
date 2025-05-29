#include <stdio.h>

int main()
{
    int n, i = 0, j;

    scanf("%d", &n);

    int v[n];

    // le os valores
    while (i < n)
    {
        scanf("%d", &v[i]);
        i++;
    }

    // vetor p guardar os 5 menores valores
    int menores[5];

    // inicia com os 5 primeiros valores do vetor
    for (i = 0; i < 5; i++)
    {
        menores[i] = v[i];
    }

    // ordena os 5 primeiros utlizando a variavel de temporaria
    i = 0;
    while (i < 5 - 1)
    {
        j = 0;
        while (j < 5 - 1)
        {
            if (menores[j] > menores[j + 1])
            {
                int temp = menores[j];
                menores[j] = menores[j + 1];
                menores[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    //  percorre o resto do vetor (do 6º em diante)
    i = 5;
    while (i < n)
    {
        // verifica se o valor atual for menor que o maior entre os 5 menores
        if (v[i] < menores[4])
        {
            menores[4] = v[i]; // substitui o maior
            // reordena os 5 menores
            j = 0;
            while (j < 4)
            {
                if (menores[j] > menores[j + 1])
                {
                    int temp = menores[j];
                    menores[j] = menores[j + 1];
                    menores[j + 1] = temp;
                    j = 0; // volta pro início pra garantir que ficou certo
                }
                else
                {
                    j++;
                }
            }
        }
        i++;
    }

    printf("Os cinco menores valores sao %d, %d, %d, %d e %d.\n",
           menores[0], menores[1], menores[2], menores[3], menores[4]);

    return (0);
}
