#include <stdio.h>

int main()
{
    int n[3];
    int i = 0;

    while (i < 3)
    {
        scanf("%d", &n[i]);
        i++;
    }

    while (i >= 2 && i != 0)
    {
        printf("%d", n[i]);
        i--;
    }

    return (0);
}