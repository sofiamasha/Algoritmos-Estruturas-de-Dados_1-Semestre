/*Faça um programa que leia um caractere e se esse for uma letra maiúscula, imprima “Maiúscula”.
Senão, se ele for uma letra minúscula, imprima “Minúscula”. Senão, se for um dígito, imprima
dígito. Senão imprima “Outro caractere”*/
#include <stdio.h>

int main()

{
    char c;

    int b = 1;

    while (b != -1)
    {
        printf("Digite um caractere ou -1 para parar: \n");
        scanf(" %c", &c);

        if (c >= 'A' && c <= 'Z')
        {
            printf("Maiuscula\n");
        }
        else if (c >= 'a' && c <= 'z')
        {
            printf("Minuscula\n");
        }
        else if (c >= '0' && c <= '9')
        {
            printf("Digito\n");
        }
        else
        {
            printf("Outro caractere \n");
        }
    }
    return 0;
}

/*Ou:


/*Faça um programa que leia um caractere e se esse for uma letra maiúscula, imprima “Maiúscula”.
Senão, se ele for uma letra minúscula, imprima “Minúscula”. Senão, se for um dígito, imprima
 n entendi a logica de como faz o while parar
#include <stdio.h>

int main()

{
char c,;
printf("Digite um caractere: ");
scanf("%c", &c);

if (c>= 'A' && c<='Z'){
    printf("Maiuscula");
}
else if(c>='a' && c<='z'){
       printf("Minuscula");
}else if(c>='0' && c <='9'){
       printf("Digito");
}
else{
    printf("Outro caractere: ");

}
    return 0;
}*/