Algoritmos e Estruturas de Dados — Exercícios em C (1º período) ✨



Coleção de ~10 exercícios resolvidos em C, pensados para quem está cursando Algoritmos e Estruturas de Dados no 1º período. Ideais para treinar lógica, I/O, casting, matemática básica e um tiquinho de trigonometria. Use como portfólio e prática! 🚀




📁 Organização do repositório

EX01.c … EX10.c — cada arquivo contém:

enunciado no topo (comentado);

solução em C, direta e didática;

I/O via scanf/printf.

Dica: abra os arquivos na ordem; a dificuldade cresce aos poucos. 😉




🧪 O que você treina aqui

entrada/saída com scanf e printf;

conversões e casting ((int), float);

contas com porcentagem e taxas;

manipulação de partes inteira/fracionária;

conversão de unidades (horas→min, kg↔g);

noções de trigonometria (graus→radianos com sin).

Exemplos de temas incluídos:

saldo com CPMF em cheques;

sobra de ração para dois gatos em 5 dias;

comprimento da escada usando ângulo e altura (seno);

parte inteira, fracionária e arredondamento de um real;

converter “hora.min” para minutos totais.




🛠️ Pré-requisitos

GCC instalado (ex.: MinGW-w64 no Windows);

VS Code (opcional, mas recomendado);

Terminal configurado (PowerShell, CMD ou bash).




▶️ Como compilar e rodar (VS Code + GCC)

Antes de compilar, entre na pasta do projeto no terminal:

cd CAMINHO\DA\SUA\PASTA


Agora, siga o formato abaixo (troque os números conforme o exercício):

GCC EX02.C -o EX02.ESH
EX02.ESH
 Se tiver dentro de uma pasta(troque os números conforme o nome da pasta):

 gcc LABORATORIO_27_8/EX15.c -o EX15.exe
    ./EX15.c
    
Observações importantes:  !!!!!!

Se seu GCC gerar .exe por padrão (Windows), use:

gcc EX02.c -o EX02.exe
.\EX02.exe


“No such file or directory”? Você não está na pasta dos arquivos. Use cd até a pasta correta.

Nomes em Windows não diferenciam maiúsculas/minúsculas, mas mantenha padrão para evitar confusão.



🧩 Dicas rápidas de estudo

Parte fracionária: fracao = x - (int)x;

Arredondar: #include <math.h> e round(x);

Graus → radianos: rad = graus * M_PI / 180.0; (precisa #include <math.h>);

“Hora.min”: extraia a parte inteira como horas e multiplique a parte decimal por 100 para minutos (ex.: 4.30 → 4h e 30min).



🤝 Contribuindo

Achou um jeito mais simples, legível ou com melhor tratamento de erros? Faça um fork e abra um PR. Comentários didáticos são super bem-vindos! ✍️



📜 Licença

MIT. Use, estude e compartilhe livremente. 💖

Feito com carinho para quem está começando — bora codar! 💻✨