#include <stdio.h>

int main()
{
    int n;

    for (n = 0; n < 6; n++)
    {
        scanf("%d", &n);

        printf("%d", n + n);
    }

    return (0);
}