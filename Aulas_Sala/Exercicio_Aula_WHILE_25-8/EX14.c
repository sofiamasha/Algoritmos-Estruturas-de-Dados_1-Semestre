#include <stdio.h>
int main()
{
    int num = 0; // iNCIALIZA A VARIAVEL NUM
    while (num < 4)
    {
        printf("%d\n", num); // Rodou o 0 e dps o 2, o 4 nao roda pq 4 n eh menor
        num += 2;
    }
    return 0;
}