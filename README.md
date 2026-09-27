Cálculo do Máximo Divisor Comum (MDC)

Este projeto foi desenvolvido como parte de uma atividade acadêmica sobre recursão em linguagem C.

O objetivo é implementar um algoritmo capaz de calcular o Máximo Divisor Comum (MDC) de dois números inteiros utilizando uma função recursiva.

📌 Sobre o projeto

O programa recebe dois números inteiros informados pelo usuário e calcula o MDC utilizando o Algoritmo de Euclides.

A lógica utilizada é:

MDC(a, b) = MDC(b, a % b)


A função continua sendo chamada recursivamente até que o segundo número seja igual a 0.

Quando isso acontece, o primeiro número corresponde ao MDC.

🛠️ Tecnologias utilizadas

Linguagem C

Biblioteca stdio.h

Biblioteca stdlib.h

Recursão

Algoritmo de Euclides

📂 Estrutura do projeto
.
├── main.c
└── README.md

▶️ Como executar
1. Clone o repositório
git clone https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git

2. Entre na pasta do projeto
cd SEU-REPOSITORIO

3. Compile o programa

Utilizando o GCC:

gcc main.c -o mdc

4. Execute

No Linux ou macOS:

./mdc


No Windows:

mdc.exe

💻 Exemplo de execução
Digite o primeiro numero: 48
Digite o segundo numero: 18
O MDC de 48 e 18 e: 6

🧠 Conceito de recursão

A recursão acontece quando uma função chama a si mesma para resolver uma parte menor do problema.

Neste projeto, a função mdc() chama a própria função utilizando:

return mdc(b, a % b);


O caso base da recursão é:

if (b == 0) {
    return abs(a);
}


Esse caso impede que a função continue sendo chamada indefinidamente.

📚 Objetivo acadêmico

O projeto tem como objetivo praticar:

Implementação de funções em C;

Passagem de parâmetros;

Estruturas condicionais;

Recursão;

Operadores aritméticos;

Algoritmo de Euclides.

👨‍💻 Autor

Seu Nome

Projeto desenvolvido para fins acadêmicos.
