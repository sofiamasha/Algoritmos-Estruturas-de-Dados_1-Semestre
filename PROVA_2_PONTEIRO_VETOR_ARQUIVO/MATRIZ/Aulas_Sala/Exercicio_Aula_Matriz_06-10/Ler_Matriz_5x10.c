/*Leia uma matriz de 5 linhas por 10 colunas que represente as respostas de 10
questoes de multipla escolha feita por 5 alunos. Em seguida, leia tb um vetor de
posicoes contendo o gabarito das questoes, cujas respostas podem ser as letras "a"
, "b", "c" ou "d". O programa deve comparar as respostas de cada aluno com o gabarito
e gerar um vetor chamado resultado, que contenha a pontuação obtida por cada aluno.*/
#include <stdio.h>
#define LINHA 5
#define COLUNA 10
int main() {
    
    //LINHA=ALUNO COLUNA=QUESTOES
    char respostas[LINHA][COLUNA];  
    char gabarito[COLUNA];          
    int resultado[LINHA];            
//
    printf("Digite as respostas dos %d alunos (letras a, b, c ou d):\n", LINHA);
    for (int i = 0; i < LINHA; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < COLUNA; j++) {
            scanf(" %c", &respostas[i][j]);  
        }
    }

    printf("Digite o gabarito das %d questoes (letras a, b, c ou d):\n", COLUNA);
    for (int j = 0; j < COLUNA; j++) {
        scanf(" %c", &gabarito[j]);
        
    }
for (int i = 0; i < LINHA; i++) {
        int pontuacao = 0;
        for (int j = 0; j < COLUNA; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontuacao++;
            }
        }
        resultado[i] = pontuacao;
    }
    
    
    printf("\nPontuacoes obtidas:\n");
    for (int i = 0; i < LINHA; i++) {
        printf("Aluno %d: %d acertos\n", i + 1, resultado[i]);
    }
    
    return 0;
}