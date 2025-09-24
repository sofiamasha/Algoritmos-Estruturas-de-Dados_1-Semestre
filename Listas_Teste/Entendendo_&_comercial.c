
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x=10;
   int *p = NULL;

   p=&x;

   printf("x= %d\n", x);
    printf("*p=%d\n", *p);
    printf("Endereço de x: %p\n", (void*)p);
   *p=12;
   printf("x= %d\n", x);
    printf("*p=%d\n", *p);
    *p=24;
     printf("x= %d\n", x);
    printf("*p=%d\n", *p);
   printf("&x=%d\n", &x);
   printf("p=%d\n", p);
 printf("*p=%d\n", *p);

   system("pause");

    return 0;
}
