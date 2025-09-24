

/*| Expressão | Explicação                                                  | Correto? | Como imprimir corretamente      |
| --------- | ----------------------------------------------------------- | -------- | ------------------------------- |
| `x`       | Ponteiro que contém o endereço de `num`                     | ✅        | `printf("%p\n", (void *)x);`    |
| `&num`    | Endereço de `num` ('&' - usar para indicar o Endereço)      | ✅        | `printf("%p\n", (void *)&num);` |
| `&x`      | Endereço da variável `x` (o ponteiro local em `incrementa`) | ✅        | `printf("%p\n", (void *)&x);`   |
| `*x`      | Valor apontado por `x` → ou seja, o **conteúdo de `num`**   | ✅        | `printf("%d\n", *x);`           |
*/

#include <stdio.h>
#include<stdlib.h>
void incrementa(int *x){
    
    printf("end de x %p\n", (void*)&x);
     printf("end de num %p\n", (void*)x);
    fflush(stdout);
    *x=*x+10;
    printf("valor apontado por x %d\n", *x);
    fflush(stdout);
   
}


int main()
{
    
    int num=5;
   
    printf("end de num %p\n", &num);
     incrementa(&num);
    printf("Valor de num: %d\n", num);

    return 0;
}