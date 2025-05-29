#include <stdio.h>

int main()
{

    int num1, num2;

    scanf("%d\n %d", &num1, &num2);

    if (num1 < num2)
    { // se n1 menor q n2
        printf("o primeiro numero digitado eh menor q o segundo.");
    }

    if (num1 > num2)
    { // se n2 menor q n1
        printf("o primeiro numero digitado eh maior q o segundo.");
    }

    return (0);
}