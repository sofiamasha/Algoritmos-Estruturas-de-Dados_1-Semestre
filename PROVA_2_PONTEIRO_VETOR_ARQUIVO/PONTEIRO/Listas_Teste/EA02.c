#include<stdio.h>
int main()
{

    int x=10;
    int *p;
    p=&x;
    printf("&x=%p\n", &x);
    printf("&x=%d\n", &x); //jeito errado de printar endereco
    printf("x=%d\n",x);
    *p=12;
    printf("x=%d\n",x);
    printf("&x=%p\n", &x);//endereco de x
    printf("*p=%d\n", *p);
    printf("p=%p\n", p);
    printf("&p=%p\n", &p);

}
