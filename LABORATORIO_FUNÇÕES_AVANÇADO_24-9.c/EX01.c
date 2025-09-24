#include <stdio.h>
//faça uma funcao com ponteiro pra achar o maior numero
int ponteiro(int *n1, int *n2){
    if(*n1>*n2){
        return *n1;
    }else{
        return *n2;
    }
    
    
}

int main(){
 
 int num1, num2, maior=0;
 printf("Digite um numero: ");
 scanf("%d", &num1);
 printf("Digite um numero: ");
 scanf("%d", &num2);
 
maior = ponteiro(&num1, &num2);
 printf("O maior numero eh: %d", maior);
    return 0;
}