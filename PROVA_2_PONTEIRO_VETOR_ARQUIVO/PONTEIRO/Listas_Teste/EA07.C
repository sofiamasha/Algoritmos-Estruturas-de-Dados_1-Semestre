#include<stdio.h>
int main()
{
    int *p, *p1, x=10, y=10;
    p=&x;
    p1=&x;
    if(p==p1)
    {
        printf("Ponteiros iguAIS\n");

    }
    else
    {

        printf("Ponteiros diferentes \n");
    }
    system ("pause");

    return 0;
}
