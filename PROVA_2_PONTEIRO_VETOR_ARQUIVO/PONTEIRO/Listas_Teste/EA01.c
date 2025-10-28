#include<stdio.h>
int main()
{
    int x=10;
    int *p;

    p=&x;
    printf("x=%d\n", x); // x=10
    printf("p=%d\n", &x);//endereco de x
    printf("*p=%d\n", *p);
    printf("&p=%d\n", p);

    system("pause");

}
