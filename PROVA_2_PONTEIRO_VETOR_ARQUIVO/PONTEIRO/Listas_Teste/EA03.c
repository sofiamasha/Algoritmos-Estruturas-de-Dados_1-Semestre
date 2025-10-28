#include<stdio.h>
int main()
{

    int *p, *p1,x=10;
    float y=20.0;
    int a=23;
    p=&x;
    float *p2=&y;
    printf("y: %.2f\n", y);
    printf("*p: %d\n", *p);
    *p1=&p;
    printf("*p1: %d\n", *p1);
    p=&a;
    printf("*p: %d\n", *p);
    p1=p;
    printf("*p1: %d\n", *p1);
    printf("*p2: %.2f\n", *p2);
    return 0;


}
