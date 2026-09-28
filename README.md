# Desafio de Monitoramento de Temperatura

## 1. Identificação

**Nome:** Isaac Araújo Torres Resende  
**Disciplina:** Algoritmos e Pensamentos Computacionais 
**Professora:** Profa. Karla Sartin  
**Projeto:** Sistema de Monitoramento de Temperatura

## 2. Objetivo

O objetivo deste projeto é criar um programa em C para monitorar temperaturas informadas pelo usuário.

O programa compara cada temperatura com um limite definido no início e verifica quando acontecem três temperaturas seguidas acima desse limite.

## 3. Funcionamento do programa

Primeiro, o programa pede para o usuário informar o limite de temperatura.

Depois disso, as temperaturas são digitadas uma por uma. A cada nova temperatura, o programa verifica se ela está acima ou não do limite.

Se o usuário digitar algo inválido, o programa avisa que a entrada não é válida e pede para informar novamente.

Quando a temperatura está acima do limite, o programa aumenta a quantidade de temperaturas acima do limite e também conta essa temperatura como uma ocorrência consecutiva.

Quando a temperatura não está acima do limite, a contagem de temperaturas consecutivas volta para zero.

O monitoramento termina automaticamente quando são registradas três temperaturas consecutivas acima do limite.

No final, o programa mostra um relatório com a quantidade de leituras, a maior temperatura, a menor temperatura, a média, a quantidade de temperaturas acima do limite e o percentual dessas temperaturas.

## 4. Estruturas de repetição utilizadas

Foi utilizado o `do...while` para fazer a validação do limite de temperatura. Ele permite que o programa peça o valor pelo menos uma vez e continue pedindo caso a entrada seja inválida.

Também foi utilizado o `while` para realizar o monitoramento das temperaturas. Ele continua repetindo as leituras até que aconteçam três temperaturas consecutivas acima do limite.

Escolhi essas estruturas porque elas facilitam o controle das repetições e combinam com a lógica do programa.

## 5. Como executar

Para compilar o programa, abra o terminal na pasta onde está o arquivo `monitoramento.c` e digite:

```bash
gcc monitoramento.c -o monitoramento
