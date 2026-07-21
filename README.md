# ⚛️ Introdução à Física Computacional — UFAL

[![C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![xmgrace](https://img.shields.io/badge/Plot-xmgrace-purple.svg)](https://plasma-gate.weizmann.ac.il/Grace/)
[![UFAL](https://img.shields.io/badge/Instituto%20de%20F%C3%ADsica-UFAL-red.svg)](https://if.ufal.br/)


Repositório dedicado aos códigos, desenvolvidos na disciplina de **Introdução à Física Computacional** do **Instituto de Física da Universidade Federal de Alagoas (IF-UFAL)**.

O objetivo da disciplina é criar uma base na **Linguagem C** e aplicá-la a resolução de problemas, exportação de dados numéricos e análise gráfica do comportamento teórico através do **Grace (xmgrace)**.

---

## 🧭 Metodologia & Fluxo de Trabalho

O desenvolvimento das atividades segue um fluxo prático de três etapas:

1. **Modelagem e Simulação em C:** Construção de algoritmos em C para resolver questões e exportar os resultados em arquivos de texto (`.dat` ou `.txt`).
2. **Processamento de Dados:** Cálculo de posições, velocidades e aceleração em função do tempo.
3. **Análise Gráfica com xmgrace:** Importação dos dados no `xmgrace` para geração de gráficos, ajustes de curvas e comparação com soluções analíticas/teóricas.

---

### 🟢 Fundamentos de Linguagem C
- Tipos de dados, operadores e precisão numérica (`float` vs `double`).
- Estruturas de controle (`if/else`, `for`, `while`).
- Funções, vetores, matrizes e ponteiros.
- **Manipulação de Arquivos:** Uso de `fopen`, `fprintf` e `fclose` para estruturação de dados em colunas para o `xmgrace`.



## 💻 Compilação do Código em C
Para compilar o código em C vinculando a biblioteca matemática (`-lm`):

```bash
gcc nome_arquivo.c -o nome_executavel.out (compilação do arquivo)
./nome_executavel (executar o programa do arquivo)

