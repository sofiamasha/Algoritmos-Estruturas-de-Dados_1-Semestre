
#include <stdio.h>
void incrementa(int x)
{

    x = x + 10;
    printf("Dentro da funcao: %d\n", x);
}

int main()
{

    int num = 5;
    incrementa(num);

    printf("Fora da funcao: %d\n", num);

    return 0;
}