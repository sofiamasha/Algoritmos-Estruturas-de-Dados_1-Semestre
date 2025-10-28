#include<stdio.h>
int main()
{
    int *p=0x5DC;

    printf("p=%d\n", p);//1500
    p++;
    printf("p=%d\n", p);//1504
    p=p+15; //15*4
    printf("p=%d\n", p);//1564
    p=p-2;
    printf("p=%d\n", p);//1556

    return 0;

}
