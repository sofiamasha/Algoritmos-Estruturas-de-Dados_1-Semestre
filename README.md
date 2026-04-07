# 💖📘 Algoritmos & Estruturas de Dados I (AEDs I)

✨ Repositório com resumos, exemplos e exercícios da disciplina de **Algoritmos e Estruturas de Dados I — PUC Minas**

> 💡 Um guia feito para sobreviver (e entender) a matéria

---

## 📑 Índice

* [📘 Prova 1 — Introdução à Programação](#-prova-1--introdução-à-programação)
* [🖇️ Prova 2 — Ponteiros e Memória](#️-prova-2--ponteiros-e-memória)
* [⚙️ Prova 3 — Estruturas de Dados](#️-prova-3--estruturas-de-dados)
* [💡 Dicas de Estudo](#-dicas-de-estudo)
* [📂 Organização](#-organização)

---

# 📘 Prova 1 — Introdução à Programação

## 🌸 Conteúdos principais

* Entrada e saída (`printf`, `scanf`) 🖥️
* Tipos de dados (`int`, `float`, `char`)
* Estruturas condicionais (`if`, `else`, `switch`)
* Laços de repetição (`for`, `while`, `do-while`) 🔁
* Funções 🔧
* Recursão 🌀

---

## 🚀 Exemplo simples (C)

```c
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    printf("Resultado: %d\n", soma(x, y));
    return 0;
}
```

---

## ✅ Checklist

* [x] Sei usar entrada e saída
* [x] Entendo tipos de dados
* [ ] Sei usar laços com segurança
* [ ] Consigo criar funções sozinho
* [ ] Entendo recursão sem surtar

---

# 🖇️ Prova 2 — Ponteiros e Memória

## 🌸 Conteúdos principais

* Ponteiros (`*` e `&`) ➰
* Endereçamento de memória
* Vetores e strings
* Alocação dinâmica (`malloc`, `free`) 🧩
* Passagem por referência

---

## 🚀 Exemplo simples (C)

```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor via ponteiro: %d\n", *ptr);

    return 0;
}
```

---

## ✅ Checklist

* [x] Sei declarar ponteiros
* [ ] Entendo bem `*` e `&`
* [ ] Sei usar `malloc` e `free`
* [ ] Sei manipular strings na prática

---

# ⚙️ Prova 3 — Estruturas de Dados

## 🌸 Conteúdos principais

* `struct` 🗂️
* Listas encadeadas ➰
* Pilhas (stack) 🥞
* Filas (queue) 🎟️
* Introdução a árvores 🌳
* Busca e ordenação 🔎

---

## 🚀 Exemplo simples (Struct em C)

```c
#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
};

int main() {
    struct Aluno a1;
    a1.matricula = 123;
    strcpy(a1.nome, "Aluno");

    printf("Matrícula: %d\n", a1.matricula);
    printf("Nome: %s\n", a1.nome);

    return 0;
}
```

---

## ✅ Checklist

* [ ] Sei usar `struct`
* [ ] Consigo implementar lista encadeada
* [ ] Entendo pilha vs fila
* [ ] Sei lógica básica de árvores

---

# 💡 Dicas de Estudo

✨ Algumas coisas que realmente ajudam:

1. Pratique escrevendo código (não só lendo)
2. Refaça exercícios de prova
3. Tente explicar o código em voz alta
4. Erre bastante (é literalmente assim que aprende)

💭 Tradução real:
se não praticar, não aprende. não tem atalho.

---

# 📂 Organização

📁 O repositório está dividido em:

* Provas
* Exercícios
* Exemplos de código

---

## 🌷 Observação final

AEDs I é onde muita gente trava…
mas também é onde tudo começa a fazer sentido.

Se você entende isso aqui, o resto do curso fica muito mais leve.

(ou pelo menos menos caótico)

---

💖 Repositório mantido por estudante de Ciência da Computação — PUC Minas
