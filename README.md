<h1 align="center"> 🚀✅ push_swap ✅🚀 </h1>



## 💻 Sobre o projeto


O <strong>push_swap</strong> faz parte da grade da Escola 42 (Milestone 2).

O projeto consiste em ordenar uma pilha de números inteiros utilizando um conjunto de operações imprimindo a menor quantidade possível de operações.

Foi utilizado o algoritmo Radix (Binary Radix Sort) para realizar a ordenação de forma eficiente.


## 🧠 Algoritmo Radix Sort

O Radix Sort é um algoritmo de ordenação não comparativo que funciona analisando os bits dos números, do menos significativo para o mais significativo.

**Estratégia utilizada:**

- Os números são idexados de acordo com a sua posição.
- Cada índice é convertido de decimal para em binário.
- para cada bit:
  - Se o bit for 0, o número é enviado para a pilha B (pb).
  - Se o bit for 1, a pilha A é rotacionada (ra).
- Após percorrer todos os elementos, os números da pilha B retornam para pilha A (pa).
- O processo se repete até que todos os bits tenham sido analisados. 

Essa abordagem garante uma complexidade de O(n log n) e é especialmente eficiente para grandes quantidades de números.

## 📌 Objetivo do Projeto

- Ordenar uma lista de inteiros utilizando duas pilhas: <strong> A e B</strong>.
- Utilizar apenas as operações permitidas (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb e rrrr).
- Minimizar o número de movimentos.
- Garantir que o programa lide corretamente com erros de entrada.


## 🧩 Regras

- A pilha A contém inicialmente todos os números.
- A pilha B começa vazia.
- Os números devem ser ordenados em ordem crescente na pilha A.
- Apenas as operações definidas no subject podem ser utilizadas.


## 🔧 Operações Permitidas


| Operações      | Descrição                                  |
|:---------------|:-------------------------------------------|
| sa (swap a)    | Troca os 2 primeiros elementos da pilha A. |
| sb (swap a)    | Troca os 2 primeiros elementos da pilha B. |
| ss (swap a)    | sa e sb ao mesmo tempo.                    |
| pa (push a)    | Move o topo de B para A.                   |
| pb (push b)    | Move o topo de A para B.                   |
| ra (rotate a)  | Rotaciona A para cima.                     |
| rb (rotate b)  | Rotaciona B para cima.                     |
| rr             | ra e rb ao mesmo tempo.                    |
| rra <br> (reverse rotate a) | Rotaciona A para baixo.                    |
| rrb <br> (reverse rotate b) | Rotaciona B para baixo.                    |
| rrr            | rra e rrb ao mesmo tempo.                  |


## 📁 Estrutura do Projeto

push_swap/ <br>
├── inc/ <br>
│ └── push_swap.h <br>
├── lib/ <br>
│ └── libft/ <br>
│   └── libft.a/ <br>
├── src/ <br>
│ ├── operations_reverse_rotate.c <br>
│ ├── operations_rotate.c <br>
│ ├── operations_swap_push.c <br>
│ ├── parsing.c/ <br>
│ ├── parsing_args.c/ <br>
│ ├── push_swap.c/ <br>
│ ├── sort_radix.c/ <br>
│ ├── sort_small.c/ <br>
│ ├── stack.c/ <br>
│ └── utils.c <br>
├── Makefile <br>
└── README.md <br>
└── checker_linux <br>



## ⚙️ Compilação

 - Para compilar o projeto, execute:

       make

 - Para limpar os arquivos objeto:

       make clean

 - Para remover tudo (obj e executável):

       make fclean

## ▶️ Execução

Após compilar, execute o programa com números a serem ordenados:

    ./push_swap 5 4 3 2 1

Ou com muitos números:

    ARG=$(seq 1 500 | shuf -n <qtd de args> | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG

## ✅ Grade ✅

![Web1](https://github.com/IngridLemosCaetano/push_swap/blob/main/push_swap.png)



## <img src="https://github.com/user-attachments/assets/c7002718-57e0-4c87-9a47-5c14e509d9ea" width="30px"/> Autora

Ingrid Lemos Caetano Silva

👩‍💻 [GitHub](https://github.com/IngridLemosCaetano) | 💼 [Linkedin](https://br.linkedin.com/in/ingrid-lemos-caetano)


![42](https://img.shields.io/badge/School-42-black)  ![42](https://img.shields.io/badge/42-push_swap-blue)

