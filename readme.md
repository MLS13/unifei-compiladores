# **LINGUAGEM MLS**
Linguagem desenvolvida para a disciplina de Compiladores do curso de Engenharia de Computação - [UNIFEI](https://unifei.edu.br/).

A linguagem é composta por um analisador léxico e um analisador sintático. E após as análises, o código é convertido para a linguagem C++.

# [Analisador Léxico](#analisador_lexico)

# [Exemplo de código](#exemplo_codigo)

# [Como utilizar](#como_utilizar)

<div id="analisador_lexico"></div>

# 1 **Analisador Léxico**

Serão apresentados nesta seção as principais características da linguagem, algumas
apresentaram suas expressões regulares e/ou autômatos.



## 1.1 Tipos de dados

|   Tipo    |   Label   |               Expressão Regular                |
| :-------: | :-------: | :--------------------------------------------: |
| Caractere | character |             [a-zA-Z][a-zA-z0-9]*           |
|  Inteiro  |    int    |            [-+]?[0-9]+            |
|   Real    |   float   | [-+]?[0-9]+( "."[0-9]* )?( [eE]"-"?[0-9]* )? |



<img src="imagens\automato_character.png" style="zoom:80%;" />

Figura 1 – Autômato character.



<img src="imagens\automato_int.png" style="zoom:80%;" />

Figura 2 – Autômato int.



<img src="imagens\automato_float.png" style="zoom:80%;" />

Figura 3 – Autômato float.



## 1.2 Delimitadores

|        Função        | Delimitador  |
| :------------------: | :----------: |
|  Início do programa  | programStart |
|   Fim do programa    |  programEnd  |
| Início de uma função |    {     |
|  Fim de uma função   |     }      |



<img src="imagens\automato_programa.png" style="zoom:80%;" />

Figura 4 – Autômato programa.



## 1.3 Símbolos especiais

Lista de símbolos especiais: . ; : ( ) { }



## 1.4 Comandos



### 1.4.1 Atribuição

Comando de atribuição: (<=).



### 1.4.2 Entrada

Comando para entrada de dados: read(<variável>|([A-Za-z]|[0-9])*).

<img src="imagens\automato_read.png" style="zoom:80%;" />

Figura 5 – Autômato read.



### 1.4.3 Saída

Comando para saída de dados: write(<variável>|([A-Za-z]|[0-9])*).

<img src="imagens\automato_write.png" style="zoom:80%;" />

Figura 6 – Autômato write.



### 1.4.4 Condicionais

A linguagem terá suporte para duas estruturas de repetição, if e if/else.

##### If:

- Expressão regular: if(<expressão lógica>)begin <instrução>* end

- Autômato:

  <img src="imagens\automato_if.png" style="zoom:80%;" />

Figura 7 – Autômato if.



##### If/Else:

- Expressão regular: if(<expressão lógica>){ <instrução>* }else{ <instrução>*}

- Autômato:

  <img src="imagens\automato_if_else.png" style="zoom:80%;" />

Figura 8 – Autômato if else.



### 1.4.5 Repetição

A linguagem terá suporte para a estruturas de repetição while.

##### While:

- Expressão regular: while((<expressão lógica>)){ <instrução>* }

- Autômato:

  <img src="imagens\automato_while.png" style="zoom:80%;" />

Figura 9 – Autômato while.

## 1.5 Operadores



### 1.5.1 Relacionais

|    Operador    | Símbolo |
| :------------: | :-----: |
|    Operador    |   ==    |
|     Maior      |    >    |
| Maior ou igual |   >=    |
|     Menor      |    <    |
|     Menor      |   <=    |

**Obs.:** *Operadores <= e >= ainda não foram implementados.*


### 1.5.2 Lógicos

| Operador | Símbolo |
| :------: | :-----: |
|   And    |   &   |
|    Or    |   \|    |
|   Not    |    !    | 

**Obs.:** *Operador ! ainda não foi implementado.*



### 1.5.3 Aritméticos

|   Operador    | Símbolo |
| :-----------: | :-----: |
|     Soma      |    +    |
|   Subtração   |    -    |
| Multiplicação |    *    |
|    Divisão    |    /    |
|     Resto     |    %    |



### 1.6 Palavras reservadas

Lista de palavras reservadas: programStart, programEnd, if, else,
while, character, int, float, write, read.

<div id="exemplo_codigo"></div>

# 2 **Exemplo de código em MLS**
| Código em MLS  | 
| :-------- | 
|programStart|
|float num_a;|
|float num_b;|
|write(Digite um numero);|
|read(num_a);|
|write(Digite outro numero);|
|read(num_b);|
|float result;|
|result = (num_a + num_b) / 2;|
|write(A MEDIA ENTRE ESTES DOIS NUMEROS E);|
|writevar(result);|
|programEnd|

<div id="como_utilizar"></div>

# 3 **Como utilizar**
Para executar os analizadores léxicos e sintáticos, e gerar o código em c++ e um arquivo contendo os tokens da linguagem, é necessário apenas executar o comando abaixo:

**.\parser nome_arquivo.mls**

Dessa forma, será gerado um código em c++. 

Com isso, para executar o programa é necessário que compile normalmente como um código em C++:

**g++ nome_arquivo.mls.cc -o nome_arquivo**

**.\nome_arquivo**

