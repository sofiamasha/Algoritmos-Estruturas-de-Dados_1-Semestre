#include <stdio.h>

int fat(int num)
{
    int resp = 1;

    for (int i = num; i > 0; i--)
    {
        resp = resp * i; // o i vai diminuindo o valor do num declarado na main,
        // o resp vai assumindo o valor desse i e multiplicando
        // ai calcula o fatorial
    }
    return resp;
}

int main()
{
    int num, resp = 1;
    num = 10;
    resp = fat(num); // resp assume o valor do fatorial assumido a cima
    printf("O valor do fatoral de %d eh %d", num, resp);
    return 0;
}
