
````markdown
# 📘 Algoritmos & Estruturas de Dados — PUC Minas

Bem-vindo(a)! 🚀  
Este repositório foi criado para ajudar estudantes do **1º semestre de Ciência da Computação - PUC Minas** 📚.  
Aqui você encontra **resumos, exemplos de código e exercícios** organizados por provas (1️⃣, 2️⃣ e 3️⃣).

> ✨ Feito por **Sofia** com carinho para quem está aprendendo (e repetindo 😅) a matéria.

---

## 📑 Índice

- [📘 Prova 1 — Introdução à Programação](#-prova-1--introdução-à-programação)
- [🖇️ Prova 2 — Ponteiros e Memória](#️-prova-2--ponteiros-e-memória)
- [⚙️ Prova 3 — Estruturas de Dados](#️-prova-3--estruturas-de-dados)
- [💡 Dicas de Estudo](#-dicas-de-estudo)
- [📂 Organização do Repositório](#-organização-do-repositório)

---

# 📘 Prova 1 — Introdução à Programação

### 📍 Conteúdos principais:
- `printf` e `scanf` 🖥️  
- Tipos de dados (`int`, `float`, `char`...)  
- Estruturas de controle: `if`, `else`, `switch`, `for`, `while`, `do-while` 🔁  
- Funções (definição, parâmetros e retorno) 🔧  
- Recursão 🌀  

---

### 🚀 Exemplo simples (C)
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
````

---

### ✅ Checklist de estudos

* [x] Sei usar `printf` e `scanf`
* [x] Sei declarar variáveis e entender seus tipos
* [ ] Consigo usar laços de repetição
* [ ] Sei criar funções
* [ ] Entendo recursão

---

# 🖇️ Prova 2 — Ponteiros e Memória

### 📍 Conteúdos principais:

* Ponteiros (`*` e `&`) ➰
* Alocação dinâmica (`malloc`, `free`) 🧩
* Vetores e Strings (armazenamento em memória)
* Funções com ponteiros (passagem por referência)
* Ponteiros para funções (avançado)

---

### 🚀 Exemplo simples (C)

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

### ✅ Checklist de estudos

* [x] Sei declarar ponteiros
* [ ] Sei acessar valores e endereços com `*` e `&`
* [ ] Sei usar `malloc` e `free`
* [ ] Sei manipular strings e vetores com ponteiros

---

# ⚙️ Prova 3 — Estruturas de Dados

### 📍 Conteúdos principais:

* Structs 🗂️
* Listas encadeadas ➰
* Pilhas (Stacks) 🥞
* Filas (Queues) 🎟️
* Árvores 🌳
* Busca e ordenação 🔎

---

### 🚀 Exemplo simples (C - Struct)

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
    strcpy(a1.nome, "Sofia");

    printf("Matrícula: %d\n", a1.matricula);
    printf("Nome: %s\n", a1.nome);

    return 0;
}
```

---

### ✅ Checklist de estudos

* [ ] Sei criar e usar `struct`
* [ ] Sei implementar lista encadeada
* [ ] Sei diferenciar pilha e fila
* [ ] Sei implementar árvore binária

---

# 💡 Dicas de Estudo

✨ Algumas estratégias para mandar bem:

1. **Pratique no papel e no computador** — ajuda a fixar lógica.
2. **Explique para alguém** — se você consegue explicar, você sabe.
3. **Refaça exercícios de provas antigas**.
4. **Não tenha medo de errar** — compilar, errar e corrigir é parte do processo.

---

# 📂 Organização do Repositório

```
📦 algoritmos-estrutura-dados
 ┣ 📁 prova1
 ┃ ┗ 📄 README.md
 ┣ 📁 prova2
 ┃ ┗ 📄 README.md
 ┣ 📁 prova3
 ┃ ┗ 📄 README.md
 ┗ 📄 README.md (este arquivo geral)
```

---

> ✨ Feito com ❤️ por **Sofia** — boa sorte nos estudos! 🚀

```

---

Esse modelo está **separadinho**, com **barras divisórias**, **emojis** em tudo e já inclui **checklists, exemplos e índice**.  
Você só precisa **copiar e colar** no `README.md` principal.  

Quer que eu faça também os **READMEs individuais** para cada pasta (`prova1`, `prova2`, `prova3`) seguindo esse mesmo estilo?
```
