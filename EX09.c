/* Faça um programa que receba uma hora formada por hora e minutos (um número real),
calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
    ■ para quatro e meia, deve-se digitar 4.30;
    ■ os minutos vão de 0 a 59.*/
//esse eu buguei mas o codigo ta certo
    #include <stdio.h>

int main() {
    float hora, hora2, min;  

    // Mensagem inicial
    printf("TRANSFORMACAO DE HORAS EM MINUTOS\n\n");

    // Entrada: usuário digita a hora no formato "hora.min"
    // Exemplo: 4.30 significa 4 horas e 30 minutos
    printf("Digite as horas (No formato hora.min): ");
    scanf("%f", &hora);

    // Guarda o valor original digitado (com parte inteira e decimal)
    hora2 = hora;

    // Pega só a parte inteira da hora (ex: 4.30 -> 4)
    hora = (int)hora;

    // Calcula os minutos:
    // (hora original - parte inteira) dá só a parte decimal
    // Exemplo: 4.30 - 4 = 0.30
    // Multiplica por 100 para transformar em minutos → 0.30 * 100 = 30
    min = (hora2 - hora) * 100;

    // Converte as horas em minutos
    // Exemplo: 4 horas → 4 * 60 = 240 minutos
    hora = hora * 60;

    // Soma os minutos das horas com os minutos digitados
    // Exemplo: 240 + 30 = 270 minutos
    hora2 = hora + min;

    // Mostra o resultado final em minutos
    printf("Conversao para minutos: %.0f\n", hora2);

    return 0;
}
