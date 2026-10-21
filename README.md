# 💻 AD1 - Algoritmos e Estruturas de Dados 1

Repositório de exercícios, implementações e simulações interativas da disciplina de **Algoritmos e Estruturas de Dados 1 (AED 1)** do curso de **Engenharia de Software** da **Universidade Federal de Goiás (UFG)**.

---

## 🏛️ Contexto Acadêmico

- **Instituição:** Universidade Federal de Goiás (UFG)
- **Curso:** Bacharelado em Engenharia de Software
- **Disciplina:** Algoritmos e Estruturas de Dados 1 (AED 1)
- **Linguagem:** C (C99 / C11)
- **Juiz Online:** BOCA (Sistema de Apoio a Competições de Programação)

---

## 📁 Estrutura do Repositório

O repositório está organizado em módulos temáticos que refletem a progressão da disciplina e os cadernos de exercícios:

```text
AD1-Exercises/
├── BOCA/                               # Exercícios do 1º caderno BOCA (divididos por tópicos do site)
│   ├── 01-revisao/                     # Sintaxe básica, I/O, aritmética e funções
│   ├── 02-matrizes/                    # Arrays bidimensionais e álgebra matricial
│   ├── 03-recursao/                    # Chamadas recursivas, caso base e memoização
│   ├── 04-complexidade/                # Análise assintótica e algoritmos gulosos
│   └── 05-ordenacao/                   # Bubble, Insertion, Selection Sort e ordenação composta
│
├── BOCA 2/                             # Exercícios do 2º caderno BOCA (organização curricular)
│   ├── 01-basico_e_funcoes/            # Operações elementares e modularização
│   ├── 02-condicionais/                # Estruturas de decisão (if/else, switch)
│   ├── 03-vetores/                     # Manipulação de vetores, busca, inversões e frequências
│   └── 04-matrizes/                    # Operações avançadas com matrizes
│
├── Algorithms Visualizations/          # Visualizadores interativos em HTML (single-file)
│   ├── visualizador-ex*.html           # Simulações dinâmicas de cada exercício do BOCA
│   └── README.md                       # Catálogo detalhado das visualizações
│
├── Aula/                               # Exercícios práticos desenvolvidos durante as aulas
└── Provas/                             # Questões e simulados de provas teóricas e práticas

```

---

## 🎨 Visualizadores Interativos

A pasta [`Algorithms Visualizations/`](./Algorithms%20Visualizations/) traz simulações gráficas em HTML/JS puro para estudo visual e passo a passo dos algoritmos mais complexos:

- **Ordenação:** Bubble Sort vs Inversões, Duelo Insertion Sort vs Selection Sort.
- **Recursão:** Torre de Hanói, Fatorial Duplo, Árvore de Fibonacci.
- **Estruturas de Dados & Gulosos:** DSU (*Disjoint Set Union* / Union-Find), Detetives e Ladrões em Matriz, Busca Binária na Resposta.

> Para abrir qualquer visualizador, basta dar um duplo clique no arquivo `.html` correspondente em qualquer navegador moderno.

---

## ⚙️ Compilação e Execução

Para compilar qualquer um dos códigos-fonte em C com flags de boas práticas e checagem de avisos:

```bash
# Compilar um exercício
gcc -Wall -Wextra -std=c99 caminho/para/arquivo.c -o programa

# Executar no Linux/macOS
./programa

# Executar no Windows (PowerShell/CMD)
.\programa.exe
```

Caso o código utilize funções matemáticas da biblioteca `<math.h>` (como `sqrt` ou `pow`), adicione a flag `-lm` na compilação:

```bash
gcc -Wall -Wextra -std=c99 caminho/para/arquivo.c -lm -o programa
```

---

## 📐 Padrões de Código

- [`.clang-format`](./.clang-format): Configuração de formatação automática para consistência de estilo.
- [`.clangd`](./.clangd): Configurações para análise estática e Language Server Protocol (LSP).
- [`.gitignore`](./.gitignore): Configurado para manter o repositório enxuto, ignorando binários (`*.exe`, `*.o`), diretórios de build e arquivos temporários de IDEs.
