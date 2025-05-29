#include <stdio.h>

int main()
{

    int opcao;

    printf("digite um numero de 1 a 5: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("voce ganhou um abraco");
        break;

    case 2:
        printf("voce ganhou um beijo");
        break;

    case 3:
        printf("vamo agora");
        break;

    case 4:
        printf("pode uma vez só");
        break;

    case 5:
        printf("eu te amo muito meu bbzinho");
        break;

    default:
        break;
    }

    return (0);
}