### Tipos
| Tipo                 | Tamanho (bytes) | Descrição                                    |
| -------------------- | --------------- | -------------------------------------------- |
| `short` (short int)  | 2 bytes         | Número inteiro pequeno                       |
| `int`                | 4 bytes         | Número inteiro                               |
| `long` (long int)    | 8 bytes         | Número inteiro longo                         |
| `long long`          | 8 bytes         | Número inteiro muito longo                   |
| `float`              | 4 bytes         | Número de ponto flutuante (precisão simples) |
| `double`             | 8 bytes         | Número de ponto flutuante (precisão dupla)   |
| `long double`        | 12 bytes        | Número de ponto flutuante (alta precisão)    |
| `char`               | 1 byte          | 1 caractere (pode ser signed ou unsigned)    |
| `bool`               | 1 byte (8 bits) | Valor lógico                                 |

Para os tipos `short`, `int`, `long`, `long long` e `char` existem variações "unsigned" (ou `u_`), que têm o mesmo tamanho, mas apenas incluem valores não negativos.
`void` é o tipo que damos a procedimentos (funções que não retornam qualquer valor)

### Operadores
| Categoria                 | Operador               | Descrição                         | Exemplo                     |
| ------------------------- | ---------------------- | --------------------------------- | --------------------------- |
| **Aritméticos**           | `+`                    | Soma                              | `a + b` (5 + 3 = 8)         |
|                           | `-`                    | Subtração                         | `a - b` (5 - 3 = 2)         |
|                           | `*`                    | Multiplicação                     | `a * b` (5 * 3 = 15)        |
|                           | `/`                    | Divisão                           | `a / b` (6 / 2 = 3)         |
|                           | `%`                    | Módulo (resto da divisão)         | `a % b` (7 % 2 = 1)         |
| **Atribuição**            | `=`                    | Atribui um valor                  | `a = 5`                     |
|                           | `+=`                   | Soma e atribui                    | `a += 3` (a = a + 3)        |
|                           | `-=`                   | Subtrai e atribui                 | `a -= 2` (a = a - 2)        |
|                           | `*=`                   | Multiplica e atribui              | `a *= 4` (a = a * 4)        |
|                           | `/=`                   | Divide e atribui                  | `a /= 2` (a = a / 2)        |
|                           | `%=`                   | Módulo e atribui                  | `a %= 3` (a = a % 3)        |
| **Comparação**            | `==`                   | Igual a                           | `a == b` (true se iguais)   |
|                           | `!=`                   | Diferente de                      | `a != b`                    |
|                           | `<`                    | Menor que                         | `a < b`                     |
|                           | `>`                    | Maior que                         | `a > b`                     |
|                           | `<=`                   | Menor ou igual a                  | `a <= b`                    |
|                           | `>=`                   | Maior ou igual a                  | `a >= b`                    |
| **Lógicos**               | `&&`                   | AND (e)                           | `a && b` (true se ambos)    |
|                           | \|\|                   | OR (ou)                           | a \|\| b (true se um)       |
|                           | `!`                    | NOT (negação)                     | `!a` (inverte o valor)      |
| **Bit a Bit**             | `&`                    | AND bit a bit                     | `a & b`                     |
|                           | \|                     | OR bit a bit                      | a \| b                     |
|                           | `^`                    | XOR bit a bit                     | `a ^ b`                     |
|                           | `~`                    | Complemento (inverte bits)        | `~a`                        |
|                           | `<<`                   | Deslocamento à esquerda           | `a << 1` (multiplica por 2) |
|                           | `>>`                   | Deslocamento à direita            | `a >> 1` (divide por 2)     |
| **Incremento/Decremento** | `++`                   | Incrementa em 1                   | `a++` ou `++a`              |
|                           | `--`                   | Decrementa em 1                   | `a--` ou `--a`              |
| **Outros**                | `sizeof`               | Retorna o tamanho em bytes        | `sizeof(int)` (4 bytes)     |
|                           | `.`                    | Acesso a membros de struct/classe | `struct.membro`             |
|                           | `[]`                   | Acesso a elementos de array       | `array[0]`                  |
|                           | `&`                    | Endereço de memória (unário)      | `&a` (endereço de a)        |
|                           | `(type)`               | Conversão de tipo (cast)          | `(float)a`                  |
|                           | `condição ? ... : ...` | Operador ternário (condicional)   | `a > b ? a : b`             |