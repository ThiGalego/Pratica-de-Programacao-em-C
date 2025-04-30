# Pratica-de-Programacao-em-C

# Exercícios Resolvidos em C - Fundamentos à Estruturação

Este repositório contém a resolução de uma lista extensa de exercícios em linguagem C, organizada por tópicos clássicos de programação. Cada grupo foca em um conjunto de conceitos fundamentais para o domínio da linguagem.

---

## 📘 Grupo 1 - Sequências Simples

1. **Conversão de metros para unidades menores**  
   Um programa que recebe um valor em metros e exibe o correspondente em decímetros, centímetros e milímetros.

2. **Tabuada de 1 a 9**  
   Geração e exibição da tabuada de multiplicação dos números de 1 a 9.

3. **Conversão de decimal para hexadecimal e octal**  
   Solicita um número decimal e exibe seu equivalente em hexadecimal e octal.

4. **Conversão de Fahrenheit para Celsius**  
   Recebe um valor em Fahrenheit e exibe seu correspondente em Celsius, usando a fórmula apropriada.

5. **Operações matemáticas com dois números**  
   Solicita dois números e exibe:
   - Soma
   - Produto do primeiro pelo quadrado do segundo
   - Quadrado do primeiro número
   - Raiz quadrada da soma dos quadrados
   - Seno da diferença entre os dois

---

## 🔁 Grupo 2 - Controle de Fluxo

1. **Impressão de intervalo de números**  
   Compara dois valores e imprime a sequência crescente, decrescente ou informa se são iguais.

2. **Tabela ASCII**  
   Exibe os códigos ASCII (decimal, hexadecimal e caractere) de 0 a 127.

3. **Inflacionamento de preço**  
   Lê o preço de um produto e aplica 10% de aumento se for menor que 100, ou 20% se for maior ou igual.

4. **Calculadora simples**  
   Lê dois valores e um operador (+, -, *, /) e imprime o resultado da operação.

5. **Média de notas com parada antecipada**  
   Solicita notas de duas provas de alunos, calculando a média. O programa para ao receber nota 50 na primeira prova.

---

## 🧮 Grupo 3 - Funções

1. **Potência (x^n)**  
   Função que calcula a enésima potência de um número real `x`.

2. **Fatorial**  
   Implementação de duas versões: uma recursiva e outra usando laço.

3. **Cálculo de `e^x`**  
   Calcula o valor de `e^x` utilizando série de Taylor até que o termo seja menor que 10⁻⁶.

4. **Sistema de pagamento com funções específicas**  
   Solicita o valor total da compra e oferece três opções de pagamento, com chamadas para funções específicas para cada opção:
   - À vista com desconto
   - Em duas parcelas
   - De 3 a 10 parcelas com juros (apenas para valores acima de R$100)

---

## 📊 Grupo 5 - Vetores

1. **Maior e menor valor**  
   Lê 10 números e imprime o maior e o menor deles.

2. **Ordenação de valores**  
   Lê 10 números e os imprime ordenados.

3. **Média de notas**  
   Função que recebe um array com 5 notas e retorna a média.

4. **Leitura de `n` valores para array `double`**  
   Rotina que solicita ao usuário `n` valores e os armazena em um array do tipo `double`.

5. **Verificação de valor igual à média**  
   Lê 10 valores e verifica se algum é igual à média dos valores.

6. **Matriz 5x3: diferença entre médias**  
   Lê uma matriz float 5x3 e calcula:
   - Média dos elementos das colunas pares
   - Média dos elementos das linhas ímpares
   - Imprime a diferença entre as duas médias

---

## 🔤 Grupo 6 - Strings

1. **Análise de caracteres**  
   Lê uma string de até 80 caracteres e conta:
   - Total de caracteres
   - Quantos são pontuações
   - Quantos são números
   - Quantos são letras minúsculas

2. **Palavras em linhas separadas**  
   Lê uma frase e imprime uma palavra por linha.

3. **Impressão normal e reversa (recursiva)**  
   Utiliza recursão para imprimir uma string normalmente e de trás para frente.

4. **Frase com dados pessoais**  
   Lê nome, endereço, telefone e idade, e monta uma frase descritiva com essas informações.

5. **Reconhecimento de “SIM” ou “NAO”**  
   Rotina que só retorna algo se o usuário digitar exatamente “SIM” ou “NAO”.

6. **Contagem de palavras**  
   Função que recebe uma string e conta quantas palavras ela possui.

7. **Implementação de `strcpy`**  
   Cria uma função que copia uma string para outra (comportamento de `strcpy`).

8. **Soletrando número inteiro**  
   Lê um número inteiro e imprime seus dígitos por extenso (ex: 123 → um dois três).

9. **Ordenação de nomes**  
   Lê até 20 nomes compostos (nome + sobrenome) e:
   - Ordena por primeiro nome
   - Ordena por sobrenome
   - Calcula média de letras por nome

10. **Remoção de caractere de string**  
    Remove todas as ocorrências de um caractere passado por parâmetro.

11. **Inserção de caractere em posição específica**  
    Insere um caractere em uma posição específica de uma string.

12. **Endereço do primeiro espaço em branco**  
    Função que retorna o endereço do primeiro espaço em branco em uma string.

13. **Conversão de número de base para decimal**  
    Recebe uma string representando um número e a base (2 a 16) e converte para decimal.

---

## 📦 Grupo 7 - Parâmetros e Estruturas

1. **Operações básicas entre dois números**  
   Função que retorna soma, diferença e produto entre dois números.

2. **Divisão com verificação de erro**  
   Calcula a razão entre dois números, retornando erro se o denominador for zero.

3. **Análise de vetor com sentinela final negativa**  
   Recebe um vetor de inteiros, calcula a média, o menor e o maior (sem considerar o último valor negativo).

4. **Leitura de 3 notas**  
   Função para leitura e retorno das três notas de um aluno.

5. **Agenda eletrônica**  
   Sistema de agenda com as seguintes opções:
   - Inserção de novo nome
   - Consulta por nome
   - Impressão de nomes que comecem por letra específica  
   Cada entrada possui: nome, endereço, telefone e CEP (máximo de 100 entradas).

6. **Gestão de produtos com estrutura**  
   Lê uma lista de 20 produtos e seus preços:
   - Ordena por nome
   - Aumenta em 5% o preço dos produtos abaixo de R$100
   - Imprime a lista atualizada  
   Utiliza estrutura `PROD` com `char nome[80]` e `float preco`.

---

## 📂 Organização

Cada grupo está em uma pasta separada no repositório. Dentro de cada pasta, os arquivos estão nomeados de forma a facilitar a identificação de qual exercício se trata.

---

## 💻 Compilação

Os programas foram escritos em C padrão e podem ser compilados com `gcc`:

```bash
gcc nome_do_arquivo.c -o executavel
./executavel