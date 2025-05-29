#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    int media;

    scanf("%d"
          "%d"
          "%d"
          "%d",
          &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;

    printf(media);

    return (0);
}