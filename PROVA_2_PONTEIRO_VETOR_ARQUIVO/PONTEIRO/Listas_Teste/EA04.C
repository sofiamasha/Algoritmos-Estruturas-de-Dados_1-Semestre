#include <stdio.h>
int main()
{
    int x = 10, a = 23;
    int *p = &x;      // p aponta pra x
    int **pp = &p;    // pp aponta pra p
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp); // imprime 10 (valor de x)

    p = &a;            // p agora aponta pra a
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp); // imprime 23 (valor de a)
}
