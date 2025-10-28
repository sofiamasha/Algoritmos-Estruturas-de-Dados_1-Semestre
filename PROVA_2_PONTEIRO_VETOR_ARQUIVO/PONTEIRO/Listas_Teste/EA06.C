#include<stdio.h>
int main(){

int *p=0x5DC;
char *c=0x5DC;
printf("p:%d\nc  =  %d\n", p,c);
p++; //1504
c++; //1501 //char
printf("p=%d\nc = %d\n", p,c);

return 0;


}
