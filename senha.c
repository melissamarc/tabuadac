#include <stdio.h>
// ta errado, refazer!!!!

int main()
{

    char senha;

    scanf("%c", &senha);

    while (senha != "")
    {
        printf("senha incorreta");
        scanf("%c", &senha);
    }

    if (senha == "")
    {
        printf("acesso liberado.");
    }

    return (0);
}