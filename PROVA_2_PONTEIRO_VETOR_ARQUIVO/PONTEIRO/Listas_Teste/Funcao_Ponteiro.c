
#include <stdio.h>
void incrementa(int *x){
    printf("end de x %p\n", &x);
    *x=*x+10;
    printf("Dentro da funcao: %d\n", *x); 
}


int main()
{
    
    int num=5;
   
    printf("end de num %p\n", &num);
     incrementa(&num);
    printf("Fora da funcao: %d\n", num);

    return 0;
}