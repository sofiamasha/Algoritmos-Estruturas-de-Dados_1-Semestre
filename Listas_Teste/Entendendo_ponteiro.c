#include <stdio.h>
int main(){

int a=20;
int *b=&a;

printf("b=%d\n", b);

printf("b=%d\n", &b);


printf("b=%d\n", *b);
return 0;
}
